#include "ScalarConverter.hpp"
#include <stdio.h>

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	return ;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter destructor called" << std::endl;
	return ;
}

ScalarConverter	&ScalarConverter::operator = (ScalarConverter const &toCopy)
{
	(void)toCopy;
	return (*this);
}

bool	onlyDigit(std::string input)
{
	int	i = 0;
	int	eskilyadespouainx = 0;

	if (input == "pi")
		return (true);
	if (input.compare("nan") == 0 || input.compare("+inf") == 0 || input.compare("-inf") == 0
		|| input.compare("nanf") == 0 || input.compare("+inff") == 0 || input.compare("-inff") == 0)
		return (true);
	if (input[0] == '-' || input[0] == '+')
		i++;
	if (input.length() == 1)
	{
		std::istringstream iss(input);
		float tmp;
		if (!((iss >> tmp) && (iss.eof())) && input.length() == 1)
			return true;
	}
	while ((input[i] && (input[i] <= '9' && input[i] >= '0')) || input[i] == '.')
	{
		if (input[i] == '.')
			eskilyadespouainx++;
		i++;
	}
	if (input[i] == 'f')
		i++;
	if (i == static_cast<int>(input.size()) && eskilyadespouainx <= 1)
		return (true);
	return (false);
}

int	ScalarConverter::convert(std::string input)
{
	if (onlyDigit(input) == false)
	{
		std::cout << "invalid argument" << std::endl;
		return (1);
	}
	if (input.length() == 1)
	{
		char	c = input[0];
		if (c < 48 || c > 57)
		{
			int		i = c;
			std::ostringstream ss;
			ss << i;
			input = ss.str();
		}
	}
	else if (input.compare("pi") == 0 || input.compare("nan") == 0 || input.compare("+inf") == 0 || input.compare("-inf") == 0
		|| input.compare("nanf") == 0 || input.compare("+inff") == 0 || input.compare("-inff") == 0)
		;
	else if (input.find("f") != std::string::npos)
	{
		std::istringstream iss(input);
		float tmp;
		if (!(iss>>tmp))
			return (std::cout << "float overflow" << std::endl, true);
	}
	else if (input.find(".") != std::string::npos && input.find("f") == std::string::npos)
	{
		std::istringstream iss(input);
		double tmp;
		if (iss >> tmp && iss.eof())
			;
		else if (tmp < DBL_MAX || tmp > DBL_MIN)
			return (std::cout << "double overflow" << std::endl, true);
	}
	else
	{
		std::istringstream iss(input);
		int tmp;
		if (!(iss>>tmp))
			return (std::cout << "int overflow" << std::endl, true);
	}
	ScalarConverter::printChar(input);
	ScalarConverter::printInt(input);
	ScalarConverter::printFloat(input);
	ScalarConverter::printDouble(input);
	return (0);
}

void	ScalarConverter::printChar(std::string str)
{
	std::istringstream	iss(str);
	int					value;
	int					eskilyaunpouain = str.find('.') + 1;

	while (eskilyaunpouain != 0 && eskilyaunpouain < static_cast<int>(str.size()) && str[eskilyaunpouain] == '0')
		eskilyaunpouain++;
	if (str[eskilyaunpouain] == 'f')
		eskilyaunpouain++;
	if (eskilyaunpouain == static_cast<int>(str.size()))
		eskilyaunpouain = 1;
	else
		eskilyaunpouain = 0;
	if (iss >> std::fixed >> value && str.compare("0") > 0 && (!(str.find('.') < str.size()) || eskilyaunpouain))
	{
		char c = static_cast<char>(value);
		if (value >= 32 && value <= 126)
			std::cout << "Char : " << c << std::endl;
		else
			std::cout << "Char : Non displayable" << std::endl;

	}
	else if (str == "pi")
		std::cout << "Char : pi" << std::endl;
	else
		std::cout << "Char : impossible" << std::endl;
}

void	ScalarConverter::printInt(std::string str)
{
	std::istringstream	iss(str);
	int 				i;

	if (iss >> i)
		std::cout << "Int : " << i << std::endl;
	else if (str.compare("pi") == 0)
		std::cout << "Int : 3" << std::endl;
	else
		std::cout << "Int : impossible" << std::endl;
}

void	ScalarConverter::printFloat(std::string str)
{
	std::istringstream	iss(str);
	float 				f;
	int					eskilyaunf = str.find('f');

	eskilyaunf = eskilyaunf > 0 ? 1 : 0;
	if (iss >> f)
	{
		if (str.size() - str.find('.') > 1 && str.find('.') < str.size())
		{
			std::cout << "Float : "<< std::setprecision(str.size() - str.find('.') - eskilyaunf - 1)
			<< std::fixed << f << "f" << std::endl;
		}
		else
		{
			std::cout << "Float : "<< std::setprecision(1)
			<< std::fixed << f << "f" << std::endl;
		}
	}
	else if (str.compare("nan") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0)
		std::cout << "Float : " << str << "f" << std::endl;
	else if (str.compare("nanf") == 0 || str.compare("+inff") == 0 || str.compare("-inff") == 0)
		std::cout << "Float : " << str << std::endl;
	else if (str.compare("pi") == 0)
		std::cout << "Float : 3.14159265358979323846f" << std::endl;
	else
		std::cout << "Float : impossible" << std::endl;
}

void	ScalarConverter::printDouble(std::string str)
{
	std::istringstream	iss(str);
	double 				d;

	if (iss >> d)
		std::cout << "Double : " << d << std::endl;
	else if (str.compare("nan") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0)
		std::cout << "Double : " << str << std::endl;
	else if (str.compare("nanf") == 0 || str.compare("+inff") == 0 || str.compare("-inff") == 0)
		std::cout << "Double : " << str.replace(str.size() - 1, 1, "\0") << std::endl;
	else if (str.compare("pi") == 0)
		std::cout << "Double : 3.14159265358979323846" << std::endl;
	else
		std::cout << "Double : impossible" << std::endl;
}
