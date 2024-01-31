/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:33:30 by sleon             #+#    #+#             */
/*   Updated: 2023/05/29 15:20:22 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <cmath>

class Span
{
	private:
		size_t			_max;
		std::list<int>	_storedValues;
	public:

		Span();
		Span(unsigned int N);
		Span(Span const &copy);
		~Span();

		Span &operator=(Span const &toCopy);

		void	addNumber(int nbr);
		void	fillLst();
		int		shortestSpan()const;
		int		longestSpan()const;
	public:

		class LimitReached : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("Cannot store more number");
			}
		};

		class NotEnoughValue : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("There is not enough values in the span");
			}
		};
};

#endif
