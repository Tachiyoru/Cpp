/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:57:14 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 16:05:58 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>

class	Zombie
{
	public:
		Zombie();
		~Zombie();
		void	Announce( void ) const;
		void	SetName(std::string name);
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );
#endif
