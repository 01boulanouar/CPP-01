/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:42:06 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/24 18:49:29 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("new zombie");
    zombie->announce();
    randomChump("random zombie");
    delete zombie;
    return (EXIT_SUCCESS);
}
