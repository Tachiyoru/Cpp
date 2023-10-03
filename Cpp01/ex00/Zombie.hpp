/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:57:14 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 15:14:04 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>

class	Zombie
{
	public:
		Zombie( std::string name );
		~Zombie( void );
		void		Announce( void ) const;
	private:
		std::string _name;
};

Zombie* NewZombie( std::string name );
void randomChump( std::string name );

#endif
