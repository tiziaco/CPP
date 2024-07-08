/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/08 17:20:50 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors and destructor

DiamondTrap::DiamondTrap(void) {
	std::cout << "ScavTrap has been initialised with the default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap( name ), FragTrap( name ), ScavTrap( name ) {
	this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
	std::cout << "ScavTrap named '"<< name << "' has been initialised." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "ScavTrap '"<< this->_name <<"' has been destructed." << std::endl;
}

/* Forwarding functions */

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
    ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
    ClapTrap::beRepaired(amount);
}

/* Public methods */

void DiamondTrap::whoAmI( void ) {
    std::cout << "I am a DiamondTrap named " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
