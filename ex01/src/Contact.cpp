/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:51:27 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/01/03 20:51:28 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::SetFirstName(std::string input)
{
	FirstName = input;
}

void Contact::SetLastName(std::string input)
{
	LastName = input;
}

void Contact::SetNickName(std::string input)
{
	NickName = input;
}

void Contact::SetPhoneNumber(std::string input)
{
	PhoneNumber = input;
}

void Contact::SetDarkestSecret(std::string input)
{
	DarkestSecret = input;
}

const std::string Contact::GetFirstName(void) const
{
	return FirstName;
}

const std::string Contact::GetLastName(void) const
{
	return LastName;
}

const std::string Contact::GetNickName(void) const
{
	return NickName;
}

const std::string Contact::GetPhoneNumber(void) const
{
	return PhoneNumber;
}

const std::string Contact::GetDarkestSecret(void) const
{
	return DarkestSecret;
}