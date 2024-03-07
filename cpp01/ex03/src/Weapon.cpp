/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 00:31:21 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/29 00:31:24 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <iostream>

Weapon::Weapon(std::string type) : type(type) {};

const std::string &Weapon::getType(void) const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}


