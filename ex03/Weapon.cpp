/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:37:43 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/25 17:32:01 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

const std::string &Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{
    type = "default";
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}
