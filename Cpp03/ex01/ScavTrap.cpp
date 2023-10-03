/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:33:17 by sleon             #+#    #+#             */
/*   Updated: 2023/05/23 17:10:41 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 50, 20){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &toCopy) : ClapTrap(toCopy._name, toCopy._pv,
	toCopy._pe, toCopy._damage)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &toCopy){
	this->_name = toCopy._name;
	this->_pv = toCopy._pv;
	this->_pe = toCopy._pe;
	this->_damage = toCopy._damage;
	return(*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_pe > 0 && _pe > 0)
	{
		this->_pe--;
		std::cout << this->_name << " attack in Scavtrap style " << target
			<< " causing " << this->_damage << " points of damage! (still tra"
			"sh)" << std::endl;
	}
	else
		std::cout << _name << " not enough energy to attack " << target << std::endl;
}

void	ScavTrap::guardGate(){
	if (_pe > 10)
	{
		this->_pe -= 10;
		std::cout << this->_name << " enters in Gate Keeper mode ";
		std::cout << std::endl;
		std::cout << "He now has " << this->_pe << " point of energy" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << _name << " not enough energy to enter guard mode " << std::endl;
	}
}
