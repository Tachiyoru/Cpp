/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:44:19 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 21:14:40 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};


