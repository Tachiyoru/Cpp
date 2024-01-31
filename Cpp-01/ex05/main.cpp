/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:53:40 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 21:38:39 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){
	Harl	harl;

	std::cout << std::endl << "in case of complain of lvl DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "in case of complain of lvl INFO" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl << "in case of complain of lvl WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "in case of complain of lvl ERROR" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "in case of complain of lvl unknown" << std::endl;
	harl.complain("unknown");
	return (0);
}
