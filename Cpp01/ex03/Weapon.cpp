/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:00:31 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 18:49:30 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type) : _type(type){
}

Weapon::~Weapon(){
}

std::string		Weapon::getType() const{
	return (_type);
}

void	Weapon::setType(std::string newType){
	this->_type = newType;
}
