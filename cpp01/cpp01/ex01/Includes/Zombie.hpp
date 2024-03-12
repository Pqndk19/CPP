/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 00:27:22 by mmassa-r          #+#    #+#             */
/*   Updated: 2024/02/23 00:27:24 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
class Zombie{

	public:
   	Zombie(std::string name);
    ~Zombie(void);
	void 				announce( void );
	void 				SetName(std::string name);
	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif