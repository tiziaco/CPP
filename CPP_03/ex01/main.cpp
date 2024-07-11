/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:52 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 17:22:04 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
	ScavTrap scavtrap1("ScavTrap1");

	// Testing attack
	scavtrap1.attack("Target1");

	// Testing takeDamage inherited from ClapTrap
	scavtrap1.takeDamage(30);

	// Testing beRepaired inherited from ClapTrap
	scavtrap1.beRepaired(20);

	// Testing the guardGate method specific to ScavTrap
	scavtrap1.guardGate();

	// Testing attack when out of energy
	for (int i = 0; i < 50; ++i) {
		scavtrap1.attack("Target1");
	}
	scavtrap1.attack("Target1");

	// Testing attack when out of hit points
	scavtrap1.takeDamage(100);
	scavtrap1.attack("Target1");

	return 0;
}
