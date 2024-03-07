/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:24:51 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/12/26 16:24:53 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::endl;

void PrintInstructions()
{
	cout << "\n"
			"             Instructions            \n"
			"---------------------------------------\n"
			"ADD - Add and save a new contact\n"
			"SEARCH - Display a specific contact\n"
			"EXIT - Quit the program\n" << endl;
}


int main()
{
	PhoneBook Phonebook;
	std::string input;

	PrintInstructions();
	while(1)
	{
		cout << "📞> ";
		getline(cin, input);
		if (cin.eof() == true)
		{
			cin.clear();
			clearerr(stdin);
		}
		if (input == "ADD")
			Phonebook.Add();
		else if (input == "SEARCH")
			Phonebook.Search();
		else if (input == "EXIT")
		{
			cout << "\e[1;32mClosing the phone...\033[0m" << endl;
			return EXIT_SUCCESS; 
		}
		else
		{
			cout << "\e[1;31mInvalid input! Try: \'ADD\', \'SEARCH\' or \'EXIT\'\033[0m" << endl;
		}
	}
	return EXIT_SUCCESS;
}