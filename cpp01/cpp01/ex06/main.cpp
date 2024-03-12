/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 00:40:17 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/03/12 00:40:18 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{

	Harl harl;

	if (argc != 2)
	{
		cout << "Invalid arguments! TRY: ./harlFilter <level>" << endl;
		return EXIT_FAILURE;
	}
	harl.complain(argv[1]);
}