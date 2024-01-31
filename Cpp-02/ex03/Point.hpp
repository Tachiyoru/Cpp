/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:24:56 by sleon             #+#    #+#             */
/*   Updated: 2023/04/29 17:04:15 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &Copy);
		~Point();

	Point &operator=( Point const &point );

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream	&operator<<( std::ostream &out, const Point &point );


#endif
