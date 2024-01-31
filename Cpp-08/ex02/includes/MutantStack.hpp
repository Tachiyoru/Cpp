/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:29:21 by sleon             #+#    #+#             */
/*   Updated: 2023/05/29 18:17:55 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <cmath>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(){}
		MutantStack<T>(const MutantStack &toCopy){
			this = *toCopy;
		}
		~MutantStack<T>(){}

		MutantStack<T>	&operator=(const MutantStack<T> &toCopy) {
			(void)toCopy;
			return *this;
		}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(){
		return this->c.begin();}
	iterator	end(){
		return this->c.end();}
};

#endif
