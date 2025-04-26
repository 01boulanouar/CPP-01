/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:03:32 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/26 16:26:09 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cout << "[ Probably complaining about insignificant problems ]" << std::endl, 1);
    
    Harl harl;
    harl.complain(argv[1]);
    
    return (EXIT_SUCCESS);
}
