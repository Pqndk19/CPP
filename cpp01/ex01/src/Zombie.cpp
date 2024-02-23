/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 00:26:07 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/23 00:26:10 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie(void)
{
	cout << name << " went to the grave... again" << endl;
}
void Zombie::SetName(std::string name)
{
	this->name = name;
}
void Zombie::announce()
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}