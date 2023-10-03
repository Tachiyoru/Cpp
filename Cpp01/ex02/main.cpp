/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:28:33 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 16:33:35 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "string address: " << &str << std::endl;
	std::cout << "using stringPTR: " << &(*stringPTR) << std::endl;
	std::cout << "using stringREF: " << &stringREF << std::endl;

	std::cout << "string: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
