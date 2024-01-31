/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:22:37 by sleon             #+#    #+#             */
/*   Updated: 2023/04/22 16:48:09 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main(int ac, char **av)
{
	std::string	string_av;
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	for(int i = 0; ++i < ac;)
	{
		string_av = av[i];
		int	len = string_av.length();
		for (int j = 0; j < len; j++)
		{
			std::cout << (char)(toupper(string_av[j]));
		}
	}
	std::cout << std::endl;
	return (0);
}
