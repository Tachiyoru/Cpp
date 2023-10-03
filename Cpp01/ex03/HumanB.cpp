/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:57:09 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 18:55:43 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL){
}

HumanB::~HumanB(){
}

void	HumanB::attack(){
	if (this->_type)
		std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
	else
		std::cout << this->_name << " cannot attack without weapon" << std::endl;
}

Weapon&	HumanB::getType( void )
{
	return (*(this->_type));
}


void	HumanB::setWeapon(Weapon &type){
	this->_type = &type;
}
