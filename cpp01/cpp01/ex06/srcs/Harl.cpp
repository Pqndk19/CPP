/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 00:40:55 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/03/12 00:40:56 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

Harl::Harl() {};
Harl::~Harl() {};

void Harl::debug(void)
{
	cout << "[ DEBUG ]" << endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << endl;
}

void Harl::info(void)
{
	cout << "[ INFO ]" << endl << "I cannot believe adding extra bacon costs more money!\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void)
{
	cout << "[ WARNING ]" << endl << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void)
{
	cout << "[ ERROR ]" << endl << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(std::string level)
{
	harl_membs_t harl_membs[] = {&Harl::debug, &Harl::info, &Harl::warning,
									&Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			switch (i)
			{
				case 0:
						(this->*harl_membs[0])();
						(this->*harl_membs[1])();
						(this->*harl_membs[2])();
						(this->*harl_membs[3])();
						break;
				case 1:
						(this->*harl_membs[1])();
						(this->*harl_membs[2])();
						(this->*harl_membs[3])();
						break;
				case 2:
						(this->*harl_membs[2])();
						(this->*harl_membs[3])();
						break;
				case 3:
						(this->*harl_membs[3])();
						break;
				default:
						break;
			}
			return;
		}
			
	}
	cout <<	"[ Probably complaining about insignificant problems ]" << endl;
}