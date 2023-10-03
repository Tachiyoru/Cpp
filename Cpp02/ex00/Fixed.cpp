/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:56:46 by sleon             #+#    #+#             */
/*   Updated: 2023/04/28 17:20:15 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_nBits = 8;

Fixed::Fixed() : _value(0){
	std::cout << "Constructeur called" << std::endl;
}

Fixed::Fixed (const Fixed &copy){
	*this = copy;
	std::cout << "Constructeur copy called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructeur called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return (_value);
}

void	Fixed::setRawBits(int const raw){
	_value = raw;
}

Fixed	&Fixed::operator=(const Fixed &copy){
	_value = copy.getRawBits();
	return(*this);
}
