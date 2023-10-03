/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:52:26 by sleon             #+#    #+#             */
/*   Updated: 2023/04/28 12:39:24 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(&type){
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with their" << this->_type->getType() << std::endl;
}

Weapon&	HumanA::getType( void )
{
	return (*(this->_type));
}
