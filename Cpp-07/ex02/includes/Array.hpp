/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:42:51 by sleon             #+#    #+#             */
/*   Updated: 2023/05/22 18:25:02 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class Array
{
	private:

		int			_size;
		T			*_tab;

	public:

		Array<T>() : _size(0), _tab(NULL){
			std::cout << "Default constructor called" << std::endl;
		}

		Array<T>(unsigned int size): _size(size){
			std::cout << "Array constructor called" << std::endl;
			if (this->_size < 0){
				throw Array<T>::NegativValue();
				return;
			}
			this->_tab = new T[size];
		}

		Array<T>(const Array<T> &src){
			std::cout << "Copy constructor called" << std::endl;
			*this = src;
		}

		~Array<T>(){
			std::cout << "Destructor called" << std::endl;
			if (this->_size > 0)
				delete [] this->_tab;
		}

		Array<T> &operator=(Array<T> const &toCopy){
			std::cout << "Assignement called" << std::endl;
			if (this == &toCopy)
				return (*this);
			if (this->_size > 0)
				delete [] this->_tab;
			this->_size = toCopy._size;
			this->_tab = new T[this->_size];
			for(int	i = 0; i < this->_size; i++)
				this->_tab[i] = toCopy._tab[i];
			return (*this);
		}

		T	&operator[](const int i){
			if (i < 0 || i >= this->_size)
				throw Array<T>::OutOfRange();
			return (this->_tab[i]);
		}

		int	size(){
			return (this->_size);
		}

	public:

		class OutOfRange : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("Went out of range");
			}
		};
		class NegativValue : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("Index cannot be negativ");
			}
		};
};

#endif
