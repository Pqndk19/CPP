/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 01:48:07 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/03/06 01:48:10 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

using std::cin;
using std::endl;
using std::cout;
using std::cerr;

int main(int argc, char**argv)
{
	if (argc != 4)
	{
		cerr << "Wrong number of arguments! TRY : ./sed <filename> <s1> <s2>" << endl;
		return (EXIT_FAILURE);
	}

	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		cerr << "Couldn't open file " << argv[1] << endl;
	}
	std::ofstream outputFile;
	std::string new_outputFile(argv[1]);
	new_outputFile.append(".replace");
	//the ofstream file stays now associated with the const string inside open(filename.replace)
	outputFile.open(new_outputFile.c_str());
	if (!outputFile.is_open())
	{
		cerr << "Couldn't create file " << new_outputFile << endl;
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.length() == 0)
	{
		cerr << "<s1> can't be empty!" << endl;
		return EXIT_FAILURE;
	}
	std::string line;
	while (getline(inputFile, line))
	{
		std::size_t pos = 0;
		while ((pos = line.find(s1)) != std::string::npos && s1 != s2)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		outputFile << line << endl;
	}
	inputFile.close();
	outputFile.close();
	return EXIT_SUCCESS;
}