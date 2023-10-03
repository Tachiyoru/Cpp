/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:44:01 by sleon             #+#    #+#             */
/*   Updated: 2023/05/22 15:49:50 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename Q>
void iter(T *a, int b, void (*c)(Q &)){
	for (int i = 0; i < b; i++)
		c(a[i]);
}

#endif
