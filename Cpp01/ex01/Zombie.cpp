/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:57:12 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 16:04:35 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << this->_name << ": No brainz = i die..." <<std::endl;
}

void	Zombie::Announce(void) const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie* zombieHorde( int N, std::string name ){
	Zombie*	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].SetName(name);
	return (horde);
}

void	Zombie::SetName(std::string name){
	this->_name = name;
}
