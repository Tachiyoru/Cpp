/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:58:54 by sleon             #+#    #+#             */
/*   Updated: 2023/04/28 19:01:46 by sleon            ###   ########.fr       */
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

		float toFloat( void ) const;
		int toInt( void ) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private	:
		int					_value;
		static const int	_nBits;
};

std::ostream	&operator<<( std::ostream &out, const Fixed &Class);
