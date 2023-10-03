/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:55:04 by sleon             #+#    #+#             */
/*   Updated: 2023/04/29 15:11:08 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

int main()
{
    Point A(4, 0);
    Point z;
    Point B(2.2, 5);
    Point C(2, 1);
    Point m(3, 0.5);
    Point n(0, 2);

    z = A;
    std::cout << z <<std::endl;
    std::cout << (bsp(z, B, C, m) ? "IN" : "OUT") << std::endl;
    std::cout << (bsp(z, B, C, n) ? "IN" : "OUT") << std::endl;
    return (0);
}
