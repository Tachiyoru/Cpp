/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:56:46 by sleon             #+#    #+#             */
/*   Updated: 2023/04/29 15:32:47 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
}

Fixed::Fixed(const int n) : _value(n << _nBits){
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _nBits))) {
}

Fixed::Fixed (const Fixed &copy){
	*this = copy;
}

Fixed::~Fixed(){
}

Fixed	&Fixed::operator=(const Fixed &copy){
	_value = copy.getRawBits();
	return(*this);
}

bool	Fixed::operator<(const Fixed &Class) const{
	if (this->_value < Class._value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &Class) const{
	if (this->_value <= Class._value)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &Class) const{
	if (this->_value > Class._value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &Class) const{
	if (this->_value >= Class._value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &Class) const{
	if (this->_value == Class._value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &Class) const{
	if (this->_value != Class._value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &Class) const{
	return (this->toFloat() + Class.toFloat());
}

Fixed	Fixed::operator*(const Fixed &Class) const{
	return (this->toFloat() * Class.toFloat());
}

Fixed	Fixed::operator-(const Fixed &Class) const{
	return (this->toFloat() - Class.toFloat());
}

Fixed	Fixed::operator/(const Fixed &Class) const{
	return (this->toFloat() / Class.toFloat());
}

Fixed	Fixed::operator--(int){
	Fixed	old = *this;
	this->_value--;
	return (old);
}

Fixed	&Fixed::operator--(void){
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	old = *this;
	this->_value++;
	return (old);
}

Fixed	&Fixed::operator++(void){
	this->_value++;
	return (*this);
}

Fixed	Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b){
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &Class){
	out << Class.toFloat();
	return (out);
}


int Fixed::getRawBits(void) const{
	return (_value);
}

void	Fixed::setRawBits(int const raw){
	this->_value = raw;
}

int	Fixed::toInt(void) const{
	return ((this->_value >>this->_nBits));
}

float	Fixed::toFloat(void) const{
	return ((float)this->_value / (1 << this->_nBits));
}
