/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:30:21 by sleon             #+#    #+#             */
/*   Updated: 2023/05/04 17:40:14 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <sstream>

class	ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( ClapTrap &src );
		~ClapTrap();

		ClapTrap	&operator=( ClapTrap &other );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_pv;
		int			_pe;
		int			_damage;
};

#endif
