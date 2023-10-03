/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:05:19 by sleon             #+#    #+#             */
/*   Updated: 2023/05/23 16:21:42 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class OcurrenceNotFound : public std::exception
{
	public:
	virtual const char* what() const throw(){
		return ("No occurence found");
	}
};

template	<typename	T>
typename T::iterator	easyfind(T &container, int	i){
	typename T::iterator res = find(container.begin(), container.end(), i);
	if (res == container.end())
		throw OcurrenceNotFound();
	return (res);
}


#endif
