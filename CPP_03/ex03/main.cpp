/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:52 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 10:01:45 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#include <iostream>
#include "DiamondTrap.hpp"

int main() {
	// Create a DiamondTrap instance using the parameterized constructor
	DiamondTrap dt1("DiamondOne");

	// Display information about the DiamondTrap instance
	dt1.whoAmI();
	
	// Perform some actions
	dt1.attack("Enemy");
	dt1.takeDamage(30);
	dt1.beRepaired(20);

	// Testing attack when out of energy
	for (int i = 0; i < 50; ++i) {
		dt1.attack("Target1");
	}

	// Test the copy constructor
	DiamondTrap dt3 = dt1;
	dt3.whoAmI();

	// Test the copy assignment operator
	dt3.whoAmI();

	return 0;
}
