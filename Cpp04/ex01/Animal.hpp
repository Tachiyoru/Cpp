/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:06:30 by sleon             #+#    #+#             */
/*   Updated: 2023/05/07 13:27:42 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected :
		std::string	_type;
		std::string	_sound;

	public :
		Animal();
		Animal(std::string type);
		Animal( Animal &src );
		Animal(std::string type, std::string sound);
		virtual ~Animal();

		virtual Animal	&operator=( Animal &toCopy);

		const std::string	&getType(void) const;
		const std::string	&getSound(void) const;
		void	makeSound() const;
		virtual Brain		*getBrain(void) const = 0;


};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);



#endif
