/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:44:01 by sleon             #+#    #+#             */
/*   Updated: 2023/05/22 15:49:50 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap( T &a, T &b ){
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T	&min( const T &a, const T &b ){
	return (a < b ? a : b);
}

template<typename T>
const T	&max( const T &a, const T &b ){
	return (a > b ? a : b);
}

#endif
