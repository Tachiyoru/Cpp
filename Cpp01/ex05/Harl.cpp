/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:51:57 by sleon             #+#    #+#             */
/*   Updated: 2023/04/27 21:36:43 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
		<< "-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You"
		<< " didn't put enough bacon in my burger ! If you did, I wouldn't "
		<< "be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've"
		<< " been coming for years whereas you started working here since"
		<< " last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level){
	void	(Harl::*complains[])( void ) = {&Harl::_debug, &Harl::_info,
		&Harl::_warning, &Harl::_error};
	std::string wichComplaint[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		void	(Harl::*theComplain)(void) = complains[i];
		if (wichComplaint[i] == level)
		{
			(this->*theComplain)();
			break;
		}
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
