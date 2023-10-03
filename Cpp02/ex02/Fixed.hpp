/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:58:54 by sleon             #+#    #+#             */
/*   Updated: 2023/04/28 21:04:15 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed{

	public	:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed (const Fixed &copy);
		~Fixed();

		Fixed	&operator=(const Fixed &copy);

		bool	operator<(const Fixed &Class) const;
		bool	operator<=(const Fixed &Class) const;
		bool	operator>(const Fixed &Class) const;
		bool	operator>=(const Fixed &Class) const;
		bool	operator==(const Fixed &Class) const;
		bool	operator!=(const Fixed &Class) const;

		Fixed	operator+(const Fixed &Class) const;
		Fixed	operator-(const Fixed &Class) const;
		Fixed	operator/(const Fixed &Class) const;
		Fixed	operator*(const Fixed &Class) const;

		Fixed	operator--(int); //postincr
		Fixed	&operator--(void);//preincr
		Fixed	operator++(int);
		Fixed	&operator++(void);

		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed	max(Fixed &a, Fixed &b);

		static Fixed	min(Fixed const &a, Fixed const &b);
		static Fixed	max(Fixed const &a, Fixed const &b);

		float toFloat( void ) const;
		int toInt( void ) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private	:
		int					_value;
		static const int	_nBits = 8;
};

std::ostream	&operator<<( std::ostream &out, const Fixed &Class);


