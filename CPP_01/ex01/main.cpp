/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:47:58 by tiacovel          #+#    #+#             */
/*   Updated: 2024/06/19 16:32:26 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	// Testing newZombie function
    int     N = 6;
    Zombie* horde = zombieHorde(N, "Zoo");

    for (size_t i = 0; i < N; i++) {
        horde[i].announce();
    }
    
    delete [] horde;
	return 0;
}