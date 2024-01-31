/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:16:47 by sleon             #+#    #+#             */
/*   Updated: 2023/05/25 11:25:40 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(){
	ClapTrap	Manuel("Manuel");

	std::cout<<std::endl;
	Manuel.attack("Naelle");
	Manuel.takeDamage(5);
	Manuel.beRepaired(2);

	FragTrap	Naelle("Naelle");

	std::cout<<std::endl;
	Naelle.attack("Manuel");
	Naelle.takeDamage(54);
	Naelle.beRepaired(12);
	Naelle.highFivesGuys();

	ScavTrap	Clem("Clem");

	std::cout<<std::endl;
	Clem.attack("Manuel");
	Clem.takeDamage(2);
	Clem.beRepaired(1);
	Clem.guardGate();

	DiamondTrap	Shanley("Shanley");

	std::cout<<std::endl;
	Shanley.attack("Manuel");
	Shanley.takeDamage(2);
	Shanley.beRepaired(1);
	Shanley.whoAmI();
}
