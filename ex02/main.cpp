/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 01:06:54 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/23 01:06:55 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str; //pointer to the string
	std::string& stringREF = str; //Referece to the string

	cout << "Mem address of str: " << &str << endl;
	cout << "Mem address held by stringPTR: " << stringPTR << endl;
	cout << "Mem address held by stringREF: " << &stringREF << endl;
	cout << endl;
	cout << "Value of str: " << str << endl;
	cout << "Value pointed to by stringPTR: " << *stringPTR << endl;
	cout << "Value pointed to by stringREF: " << stringREF << endl;
}