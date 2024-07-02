/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:52 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/02 16:27:44 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap1("ClapTrap1");
    ClapTrap claptrap2("ClapTrap2");

    // Testing attack when both ClapTrap instances are in default state
    claptrap1.attack("Target1");
    claptrap2.attack("Target2");

    // Making ClapTrap2 attack ClapTrap1
    claptrap2.attack("ClapTrap1");

    // Testing takeDamage
    claptrap1.takeDamage(3);
    claptrap2.takeDamage(4);

    // Testing beRepaired
    claptrap1.beRepaired(5);
    claptrap2.beRepaired(6);

    // Testing copy constructor
    ClapTrap claptrap3(claptrap2);
    claptrap3.attack("Target3");

    // Testing assignment operator
    ClapTrap claptrap4("ClapTrap4");
    claptrap4 = claptrap1;
    claptrap4.attack("Target4");

    // Testing out of energy scenario
    for (int i = 0; i < 10; ++i) {
        claptrap4.attack("Target4");
    }
    claptrap4.attack("Target4");

    // Testing out of hit points scenario
    claptrap4.takeDamage(20);
    claptrap4.attack("Target4");

    return 0;
}

