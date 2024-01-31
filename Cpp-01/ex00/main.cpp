/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:57:17 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 15:35:44 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Creating the first Zombie, Manuel," << std::endl;
	Zombie	Manuel("Manuel");
	Manuel.Announce();
	std::cout << "Creating the second Zombie, Shanley, with function newZombie"
		<< std::endl;
	Zombie	*Shanley = NewZombie("Shanley");
	Shanley->Announce();
	delete Shanley;
	std::cout << "Creating the third Zombie, Naelle, with function randomChump"
		<< std::endl;
	randomChump("Naelle");
	return (0);
}
