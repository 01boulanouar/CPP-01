/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:19:29 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/26 15:51:10 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl {
    public:
        void complain(std::string level);
    private:
        void debug(void) const;
        void info(void) const;
        void warning(void) const;
        void error(void) const;
};

#endif
