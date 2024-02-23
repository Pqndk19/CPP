/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:51:12 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/01/03 20:51:14 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::endl;

std::string truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return str;
}

void print_contact_info(Contact contact)
{
	cout << "\nFirst Name: " << contact.GetFirstName() << endl;
	cout << "Last Name: " << contact.GetLastName() << endl;
	cout << "Nickname: " << contact.GetNickName() << endl;
	cout << "Phone Number: " << contact.GetPhoneNumber() << endl;
	cout << "Darkest Secret: " << contact.GetDarkestSecret() << endl;
	cout << endl;
}
void PhoneBook::Add(void)
{
	Contact new_contact;
	std::string input;

	cout << "First Name: ";
	getline(cin, input);
	new_contact.SetFirstName(input);

	cout << "Last Name: ";
	getline(cin, input);
	new_contact.SetLastName(input);

	cout << "Nickname: ";
	getline(cin, input);
	new_contact.SetNickName(input);

	while (1)
	{
		cout << "Phone Number ☎️ : ";
		getline(cin, input);
		if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
		{
			cout << "\e[1;33mPhone number must not be empty and fully composed ONLY by numbers!\033[0m" << endl;
			continue;
		}
		new_contact.SetPhoneNumber(input);
		break;
	}

	cout << "Your Darkest Secret 🤫: ";
	getline(cin, input);
	new_contact.SetDarkestSecret(input);

	if (count > (MAX_CON - 1))
		contacts[count - 1] = new_contact;
	else
	{
		count++;
		contacts[count - 1] = new_contact;
	}
	cout << "\n\e[1;32mNew contact added!\033[0m 👌" << endl;
}

void PhoneBook::Search(void)
{
	if (count == 0)
	{
		cout << "\e[1;33mThere are no contacts to display, try ADD to add a contact.\033[0m" << endl;
		return ;
	}
	cout << "\n|     Index|First Name| Last Name|  Nickname|" << endl;
	cout << "|----------|----------|----------|----------|" << endl;
	size_t i = -1;
	while (++i < count)
	{
		cout << "|" << std::right << std::setw(10) << i << "|";
		cout << std::right << std::setw(10) << truncate(contacts[i].GetFirstName()) << "|";
		cout << std::right << std::setw(10) << truncate(contacts[i].GetLastName()) << "|";
		cout << std::right << std::setw(10) << truncate(contacts[i].GetNickName()) << "|" << endl;
	}	
	std::string cont_index;
	int convertion;

	while (1)
	{
		cout << "Please, write the index(number) of the contact you want to display: ";
		getline(cin, cont_index);
		if (cont_index.empty() || cont_index.find_first_not_of("01234567") != std::string::npos)
		{
			cin.clear();
			cout << "\e[1;33mWrite one of indexes that are in the table of contacts\033[0m" << endl;
			continue ;
		}
		convertion = atoi(cont_index.c_str());
		if (convertion <= (MAX_CON - 1))
			break ;
		cout << "\e[1;33mWrite one of indexes that are in the table of contacts\033[0m" << endl;
	}
	if ((size_t)convertion > (count - 1))
		cout << "\e[1;33mThere is no saved contact with that index!\033[0m" << endl;
	else
		print_contact_info(contacts[convertion]);
}