/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:52 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/02 17:41:35 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main() {
    FragTrap fragtrap1("FragTrap1");

    // Testing attack inherited from ClapTrap
    fragtrap1.attack("Target1");

    // Testing takeDamage inherited from ClapTrap
    fragtrap1.takeDamage(30);

    // Testing beRepaired inherited from ClapTrap
    fragtrap1.beRepaired(20);

    // Testing the guardGate method specific to ScavTrap
    fragtrap1.highFivesGuys();

    // Testing attack when out of energy
    for (int i = 0; i < 50; ++i) {
        fragtrap1.attack("Target1");
    }
    fragtrap1.attack("Target1");

    // Testing attack when out of hit points
    fragtrap1.takeDamage(100);
    fragtrap1.attack("Target1");

    return 0;
}
