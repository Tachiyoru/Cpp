/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:43:43 by sleon             #+#    #+#             */
/*   Updated: 2023/08/28 18:13:34 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits.h>
# include <float.h>

class ScalarConverter
{
	private:
		ScalarConverter(void);

	public:

		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter(void);

		ScalarConverter	&operator = (ScalarConverter const &toCopy);

		static int		convert(std::string input);

		static void		printChar(std::string str);
		static void		printInt(std::string str);
		static void		printFloat(std::string str);
		static void		printDouble(std::string str);

};

#endif
