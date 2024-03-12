/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 00:26:27 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/23 00:26:28 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie_horde[i].SetName(name);
	return (zombie_horde);
}