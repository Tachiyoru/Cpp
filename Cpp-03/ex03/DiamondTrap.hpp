/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:08:12 by sleon             #+#    #+#             */
/*   Updated: 2023/05/25 11:23:36 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string	_name;
	public :
		DiamondTrap( void );
		DiamondTrap(DiamondTrap &diamondtrap );
		DiamondTrap( std::string name );
		~DiamondTrap();

		DiamondTrap	&operator=( DiamondTrap &diamondtrap );
		
		void	attack(std::string target);
		void	whoAmI();
};

#endif
