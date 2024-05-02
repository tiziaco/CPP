/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:47:58 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/02 11:22:38 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	// Testing newZombie function
    Zombie* z1 = newZombie("Zombie1");
    std::cout << "Created new zombie in Heap memory" << std::endl;
    z1->announce();
    delete z1;
    
    // Testing randomChump function
    std::cout << "\nCreating random chump zombie...\n";
    randomChump("RandomChump");

	return 0;
}