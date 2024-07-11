/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 10:41:30 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors and destructor

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_points = 30;
	std::cout << "DiamondTrap named '"<< name << "' has been initialised." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap '"<< this->_name <<"' has been destructed." << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& trap) : ClapTrap(trap), ScavTrap(trap), FragTrap(trap) {
	*this = trap;
	std::cout << "DiamondTrap named '"<< trap._name << "' has been copied." << std::endl;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& trap) {
	if (this != &trap) {
		this->_name = trap._name;
		ScavTrap::operator=(trap);
		FragTrap::operator=(trap);
	}
	std::cout << "Assignment operator calld from '"<< trap._name << "'."<< std::endl;
	return *this;
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
