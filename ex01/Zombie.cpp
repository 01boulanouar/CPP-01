/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:19:12 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/24 23:29:53 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	name = "default";
	std::cout << name << ": Created" << std::endl;
}


Zombie::Zombie(const std::string name)
{
	this->name = name;
	std::cout << name << ": Created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": Destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
