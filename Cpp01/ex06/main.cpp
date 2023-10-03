/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:53:40 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 21:43:41 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av){
	Harl		harl;
	std::string	complain;

	if (ac != 2)
		return (std::cout << "Harl can only recieve one complain" << std::endl, 1);
	complain = av [1];

	harl.complain(complain);
	return (0);
}
