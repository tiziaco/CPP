/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/02 17:25:36 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors and destructor

ScavTrap::ScavTrap(void) {
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

/* Forwarding functions */

void ScavTrap::attack(const std::string& target) {
    ClapTrap::attack(target);
}

void ScavTrap::takeDamage(unsigned int amount) {
    ClapTrap::takeDamage(amount);
}

void ScavTrap::beRepaired(unsigned int amount) {
    ClapTrap::beRepaired(amount);
}

/* Public methods */

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
