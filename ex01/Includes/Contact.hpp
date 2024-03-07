/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:49:19 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/01/02 17:49:20 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
class Contact
{
	public:
		void 	SetFirstName(std::string str);
		void 	SetLastName(std::string str);
		void 	SetNickName(std::string str);
		void 	SetPhoneNumber(std::string str);
		void 	SetDarkestSecret(std::string str);

		const std::string 		GetFirstName(void) const;
		const std::string 		GetLastName(void) const;
		const std::string 		GetNickName(void) const;
		const std::string 		GetPhoneNumber(void) const;
		const std::string 		GetDarkestSecret(void) const;

	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		NickName;
		std::string		PhoneNumber;
		std::string		DarkestSecret;
};

#endif