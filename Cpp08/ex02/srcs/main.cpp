/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:29:31 by sleon             #+#    #+#             */
/*   Updated: 2023/09/13 16:36:52 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout <<"top value before pop is "<<mstack.top() << std::endl;
	mstack.pop();
	std::cout <<"top value after pop is "<<mstack.top() << std::endl;
	std::cout <<"size is "<<mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout <<"top value is "<<mstack.top() << std::endl;
	std::cout <<"size is "<<mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout<<"iteration of the mutant stack result in :"<<std::endl;
	++it;
	--it;
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout <<"top value of stack is "<<s.top() << std::endl;
	std::cout <<"size of stack is "<<s.size() << std::endl;
	return 0;
}

