/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:27:34 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/12/26 16:27:35 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include "Contact.hpp"

# define MAX_CON 8

class PhoneBook
{
	public:

		PhoneBook() : count(0) {}

		void Add(void);
		void Search(void);
	
	private:
		size_t count;
		Contact contacts[MAX_CON];
};

#endif