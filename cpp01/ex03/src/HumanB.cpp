/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 00:32:06 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/29 00:32:07 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void HumanB::attack()
{
	cout << this->name << " attacks with their " << weapon->getType() << endl;
}