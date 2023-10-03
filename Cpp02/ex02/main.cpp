/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:55:04 by sleon             #+#    #+#             */
/*   Updated: 2023/04/28 21:08:12 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

// if (a < b)
// 	std::cout<<"oui"<<std::endl;
// else
// 	std::cout<<"non"<<std::endl;
// if (a <= b)
// 	std::cout<<"oui"<<std::endl;
// else
// 	std::cout<<"non"<<std::endl;
// if (a >= b)
// 	std::cout<<"oui"<<std::endl;
// else
// 	std::cout<<"non"<<std::endl;
// if (a > b)
// 	std::cout<<"oui"<<std::endl;
// else
// 	std::cout<<"non"<<std::endl;
// if (a == b)
// 	std::cout<<"oui"<<std::endl;
// else
// 	std::cout<<"non"<<std::endl;
// if (a != b)
// 	std::cout<<"oui"<<std::endl;
// else
// 	std::cout<<"non"<<std::endl;

// std::cout<<"avec le + "<< a + b<<std::endl;
// std::cout<<"avec le - "<< a - b<<std::endl;
// std::cout<<"avec le * "<< a * b<<std::endl;
// std::cout<<"avec le / "<< a / b<<std::endl;

// std::cout <<"valeur de a "<< a.toFloat() << std::endl;
// std::cout <<"valeur de a a ++a " << ++a << std::endl;
// std::cout <<"valeur de a apres ++a "<< a << std::endl;
// std::cout <<"valeur de a a a++ "<< a++ << std::endl;
// std::cout <<"valeur de a apres a++ "<< a << std::endl;
// std::cout <<"valeur de b "<< b << std::endl;
// std::cout << "le min est " << Fixed::min( a, b ) << std::endl;
// std::cout << "le max est " << Fixed::max( a, b ) << std::endl;
return 0;
}
