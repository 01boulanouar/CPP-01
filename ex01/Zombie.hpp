/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:19:29 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/24 23:51:37 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
    public:
        Zombie(const std::string name);
        Zombie();
        ~Zombie();
        void announce(void);
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
