/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:37:31 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/25 17:34:58 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H

# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
};

#endif
