/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:56:46 by sleon             #+#    #+#             */
/*   Updated: 2023/04/28 19:05:33 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_nBits = 8;

Fixed::Fixed() : _value(0){
	std::cout << "Constructeur called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << _nBits){
	std::cout << _value << std::endl;
	std::cout << "Constructeur const int called" << std::endl;
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _nBits))) {
	std::cout << "Constructeur const float called" << std::endl;
}

Fixed::Fixed (const Fixed &copy){
	*this = copy;
	std::cout << "Constructeur copy called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructeur called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy){
	_value = copy.getRawBits();
	return(*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &Class){
	out << Class.toFloat();
	return (out);
}


int Fixed::getRawBits(void) const{
	std::cout << "getRawBIts member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBIts member function called" << std::endl;
	this->_value = raw;
}

int	Fixed::toInt(void) const{
	return ((this->_value >>this->_nBits));
}

float	Fixed::toFloat(void) const{
	return ((float)this->_value / (1 << this->_nBits));
}
