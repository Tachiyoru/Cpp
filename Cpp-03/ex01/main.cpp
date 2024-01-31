/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:16:47 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 16:29:15 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(){
	ClapTrap	Manuel("Manuel");

	Manuel.attack("Naelle");
	Manuel.takeDamage(5);
	Manuel.beRepaired(2);

	ScavTrap	Naelle("Naelle");

	Naelle.attack("Manuel");
	Naelle.takeDamage(2);
	Naelle.beRepaired(1);
	Naelle.guardGate();
}
