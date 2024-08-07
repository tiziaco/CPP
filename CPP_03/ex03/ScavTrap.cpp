/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 16:58:16 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors and destructor

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "ScavTrap has been initialised with the default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->_energy_points = 50;
	this->_hit_points = 100;
	this->_attack_points = 20;
	std::cout << "ScavTrap named '"<< name << "' has been initialised." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap '"<< this->_name <<"' has been destructed." << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& trap) : ClapTrap(trap) {
	*this = trap;
	std::cout << "ScavTrap named '"<< trap._name << "' has been copied." << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& trap) {
	if (this != &trap) {
		ClapTrap::operator=(trap);
	}
	return *this;
}

/* Forwarding functions */

void ScavTrap::attack(const std::string& target) {
	if (this->_energy_points <= 0) {
		std::cout << "ScavTrap '" << this->_name << "' can't attack because is out of energy!" << std::endl;
		return;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ScavTrap '" << this->_name << "' can't attack because is dead!" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "ScavTrap '" << this->_name << "' attacks '" << target << "', causing " << this->_attack_points << " points of damage!" << std::endl;
}

/* Public methods */

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
