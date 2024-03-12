/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 00:31:08 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/29 00:31:10 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>


class Weapon
{
	public:
		Weapon(std::string type);
		const std::string &getType(void) const;
		void setType(std::string type);
	private:
		std::string	type;
	
};

#endif