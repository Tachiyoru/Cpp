/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:45:31 by sleon             #+#    #+#             */
/*   Updated: 2023/08/29 13:20:32 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>			intTab;
	Array<int>			intTab2(15);
	Array<std::string>	stringTab(5);

	intTab2[0] = 5;
	intTab2[1] = 55;
	intTab2[2] = 555;
	intTab2[3] = 5555;
	intTab2[4] = 55555;
	intTab = intTab2;
	std::cout<<intTab[0]<<std::endl;
	std::cout<<intTab[1]<<std::endl;
	std::cout<<intTab[2]<<std::endl;
	std::cout<<intTab[3]<<std::endl;
	std::cout<<intTab[4]<<std::endl;
	stringTab[0] = "manu trop nul";
	stringTab[1] = "merci manu";
	stringTab[2] = "non clem";
	stringTab[3] = "je t'ecoute pas";
	stringTab[4] = "feur";

	try
	{
	Array<std::string>	stringTab(-5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << stringTab[42] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << stringTab[-42] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << stringTab[4] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
