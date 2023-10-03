/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:58:54 by sleon             #+#    #+#             */
/*   Updated: 2023/04/28 18:06:59 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{

	public	:
		Fixed();
		Fixed (const Fixed &copy);
		~Fixed();
		Fixed	&operator=(const Fixed &copy);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private	:
		int					_value;
		static const int	_nBits;
};
