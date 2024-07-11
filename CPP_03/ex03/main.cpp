/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:52 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 10:23:27 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#include <iostream>
#include "DiamondTrap.hpp"

void test_DiamondTrap_copy() {
	DiamondTrap dt1("Diamond1");

	// Use the copy constructor to create a copy
	DiamondTrap dt2(dt1);

	// Use the copy assignment operator to copy dt1 to dt3
	DiamondTrap dt3("TemporaryName");
	dt3 = dt1;

	// Output the names to verify the copy operations
	dt1.whoAmI();
	dt2.whoAmI();
	dt3.whoAmI();
}

void test_DiamondTrap_actions() {
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
}

int main() {
	std::cout << "\n*** Test DiamondTrap constructors ***" << std::endl;
	test_DiamondTrap_copy();

	std::cout << "\n*** Test DiamondTrap actions ***" << std::endl;
	test_DiamondTrap_actions();

	return 0;
}
