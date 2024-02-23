/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:58:10 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/14 21:58:11 by mmassa-r         ###   ########.fr       */
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
	Zombie *one = newZombie("Ted");
	randomChump("Eva");

	delete one;
}
