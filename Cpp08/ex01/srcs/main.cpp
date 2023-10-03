/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:36:18 by sleon             #+#    #+#             */
/*   Updated: 2023/09/13 16:29:08 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(){
	Span sp = Span(5);


	try
	{
		sp.addNumber(6);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp.addNumber(3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp.addNumber(17);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp.addNumber(9);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp.addNumber(564);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout<<"Shortest span is :"<<sp.shortestSpan()<<std::endl;
	std::cout<<"Longest span is :"<<sp.longestSpan()<<std::endl<<std::endl;

	Span sp2 = Span(10);
	std::cout<<"randomly fill the Span"<<std::endl;
	sp2.fillLst();

	std::cout<<std::endl;
	std::cout<<"Auto fill shortest span is :"<<sp2.shortestSpan()<<std::endl;
	std::cout<<"Auto fill longest span is :"<<sp2.longestSpan()<<std::endl<<std::endl;


	return 0;
}
