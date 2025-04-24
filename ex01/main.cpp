/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:27:43 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/24 23:59:38 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{

    int N = 3;

    Zombie *Horde = zombieHorde(N, "test zombie");

    for (int i = 0; i < N; i++)
    {
        std::cout << i <<  " : ";
        Horde[i].announce();
    }

    delete[] Horde;
    return (EXIT_SUCCESS);
}
