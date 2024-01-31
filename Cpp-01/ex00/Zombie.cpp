/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:57:12 by sleon             #+#    #+#             */
/*   Updated: 2023/05/23 17:36:26 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name){
}

Zombie::~Zombie(){
	std::cout << this->_name << ": No brainz = i die..." <<std::endl;
}

void	Zombie::Announce(void) const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie* NewZombie( std::string name ){
	Zombie* NewZombie = new Zombie(name);
	return(NewZombie);
}

void randomChump( std::string name ){
	Zombie* randomChump = new Zombie(name);
	randomChump->Announce();
	delete randomChump;
}
