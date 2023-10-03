/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:33:17 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 17:41:25 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30){
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &toCopy) : ClapTrap(toCopy._name, toCopy._pv,
	toCopy._pe, toCopy._damage)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &toCopy){
	this->_name = toCopy._name;
	this->_pv = toCopy._pv;
	this->_pe = toCopy._pe;
	this->_damage = toCopy._damage;
	return(*this);
}

void	FragTrap::highFivesGuys(){
	if (_pe > 20)
	{
		this->_pe -= 20;
		std::cout << this->_name << " raises his hand in wait for a high fives";
		std::cout << std::endl;
		std::cout << "He now has " << this->_pe << " point of energy" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << _name << " not enough energy to enter guard mode " << std::endl;
	}
}
