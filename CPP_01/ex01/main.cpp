/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:47:58 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/02 12:19:24 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	// Testing newZombie function
    Zombie* horde = zombieHorde(4, "Zoo");

    for (size_t i = 0; i < 4; i++) {
        horde[i].announce();
    }
    
    delete [] horde;
	return 0;
}