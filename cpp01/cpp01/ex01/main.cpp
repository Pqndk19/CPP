/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 00:25:16 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/23 00:25:19 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "Zombie.hpp"

using std::cout;
using std::cin;
using std::endl;

int	main(void)
{
	int n;
	std::string zombies_name;

	n = 8;
	zombies_name = "Eva";

	Zombie *zombie_horde = zombieHorde(n, zombies_name);

	for (int i = 0; i < n; i++)
		zombie_horde[i].announce();

	delete[] zombie_horde;
	return EXIT_SUCCESS;
}
