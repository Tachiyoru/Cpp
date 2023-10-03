/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:58:51 by sleon             #+#    #+#             */
/*   Updated: 2023/05/23 16:29:08 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <string>
#include "Easyfind.hpp"

int	main(){
	std::list<int>				lst;
	std::list<int>::iterator	it;

	lst.push_back(15);
	lst.push_back(150);
	lst.push_back(2);
	lst.push_back(91);
	lst.push_back(82);

	try
	{
		it = easyfind (lst, 2);
		std::cout<<*it<<std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		it = easyfind (lst, 42);
		std::cout<<*it<<std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
