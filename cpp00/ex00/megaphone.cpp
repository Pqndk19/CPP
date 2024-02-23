/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:13:41 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/12/20 16:13:46 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return EXIT_SUCCESS;
	}
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; argv[i][j] != '\0'; ++j)
			{
				std::cout << (char)toupper(argv[i][j]);
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}