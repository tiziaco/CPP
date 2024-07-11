/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:52 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 17:16:21 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap fragtrap1("FragTrap1");
	ScavTrap scavtrap1("ScavTrap1");

	// Testing attack
	fragtrap1.attack("Target1");

	// Testing takeDamage
	fragtrap1.takeDamage(30);

	// Testing beRepaired
	fragtrap1.beRepaired(20);

	// Testing the highFive method
	fragtrap1.highFivesGuys();

	// Testing attack when out of energy
	for (int i = 0; i < 101; ++i) {
		fragtrap1.attack("Target1");
	}
	fragtrap1.attack("Target1");

	// Testing attack when out of hit points
	fragtrap1.takeDamage(100);
	fragtrap1.attack("Target1");

	return 0;
}
