/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:24:58 by sleon             #+#    #+#             */
/*   Updated: 2023/04/29 17:04:02 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(), _y(){
}

Point::Point( const Point &point): _x(point._x), _y(point._y){
}

Point::Point(const float x, const float y): _x(x), _y(y){
}

Point::~Point( void ){
}

Point &Point::operator=( Point const &point ){
	this->~Point();
	new (this)	Point(point._x.toFloat(), point._y.toFloat());
	return (*this);
}

Fixed	Point::getX( void ) const{
	return (this->_x);
}

Fixed	Point::getY( void ) const{
	return (this->_y);
}

std::ostream	&operator<<( std::ostream &out, const Point &point ){
	out << point.getX();
	return (out);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float d1 = ((point.getX().toFloat() - b.getX().toFloat())
		* (a.getY().toFloat() - b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat())
		* (point.getY().toFloat() - b.getY().toFloat()));
	float d2 = ((point.getX().toFloat() - c.getX().toFloat())
		* (b.getY().toFloat() - c.getY().toFloat()) - (b.getX().toFloat() - c.getX().toFloat())
		* (point.getY().toFloat() - c.getY().toFloat()));
	float d3 = ((point.getX().toFloat() - a.getX().toFloat())
		* (c.getY().toFloat() - a.getY().toFloat()) - (c.getX().toFloat() - a.getX().toFloat())
		* (point.getY().toFloat() - a.getY().toFloat()));

	bool negativ = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool positiv = (d1 > 0) || (d2 > 0) || (d3 > 0);

	if ((negativ && !positiv) || (!negativ && positiv))
		return (true);
	else
		return (false);
}
