/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:35:12 by sleon             #+#    #+#             */
/*   Updated: 2023/05/25 11:23:44 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "Default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_pv = FragTrap::getFPv();
	this->_pe = ScavTrap::getSPe();
	this->_damage = FragTrap::getFDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name){
	std::cout << "DiamondTrap  constructor called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_pv = FragTrap::getFPv();
	this->_pe = ScavTrap::getSPe();
	this->_damage = FragTrap::getFDamage();
}


DiamondTrap::DiamondTrap(DiamondTrap &toCopy)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap &toCopy){
	this->_name = toCopy._name;
	this->ClapTrap::_name = toCopy._name + "_clap_name";
	this->_pv = toCopy._pv;
	this->_pe = toCopy._pe;
	this->_damage = toCopy._damage;
	return(*this);
}

void	DiamondTrap::attack(std::string target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name : " << _name << std::endl;
	std::cout << "ClapTrap Name : "<< ClapTrap::_name << std::endl;
}
