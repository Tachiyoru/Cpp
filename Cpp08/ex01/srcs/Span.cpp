/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:11:03 by sleon             #+#    #+#             */
/*   Updated: 2023/09/13 16:28:04 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
	std::cout<<"Span default constructor called"<<std::endl;
}

Span::Span(unsigned int N) : _max(N), _storedValues(0){
	std::cout<<"Span constructor called"<<std::endl;
}


Span::Span(Span const &toCopy){
	if (this != &toCopy)
		*this = toCopy;
	std::cout<<"Span copy constructor called"<<std::endl;
}

Span::~Span(){
	std::cout<<"Span destructor called"<<std::endl;
}

Span& Span::operator=(Span const &toCopy){
	if (this == &toCopy)
		return (*this);
	this->_max = toCopy._max;
	_storedValues.assign(toCopy._storedValues.begin(), toCopy._storedValues.end());
	return (*this);
}

void	Span::addNumber(int nbr){
	if (_storedValues.size() == _max)
		throw LimitReached();
	_storedValues.push_back(nbr);
	std::cout<<"added "<<nbr<<std::endl;

}

void	Span::fillLst(){
	int	nbr;

	srand(time(0));
	for (int i = 0; i < 10; i++){
		nbr = rand() % 1000;
		std::cout<<"number added is = "<<nbr<<std::endl;
		_storedValues.push_back(nbr);
	}
}


int		Span::shortestSpan()const{
	if (_storedValues.size() <= 1)
		throw NotEnoughValue();

	std::list<int>				tmp = _storedValues;
	tmp.sort();
	std::list<int>::iterator	it = tmp.begin();
	std::list<int>::iterator	it_next = it;
	int							smallest = 2147483647;

	it_next++;
	while (it_next != tmp.end()){
		int	diff = abs(*it_next - *it);
		if (diff < smallest)
			smallest = diff;
		it++; it_next++;
	}
	return smallest;
}

int		Span::longestSpan()const{
	if (_storedValues.size() <= 1)
		throw NotEnoughValue();

	std::list<int>				tmp = _storedValues;
	tmp.sort();
	std::list<int>::iterator	it = tmp.begin();
	std::list<int>::iterator	it_next = tmp.end();
	int							biggest = 0;

	it_next--;
	biggest = abs(*it_next - *it);

	return biggest;
}
