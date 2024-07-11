/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 15:44:45 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors and destructor

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "FragTrap has been initialised with the default constructor." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->_energy_points = 100;
	this->_hit_points = 100;
	this->_attack_points = 30;
	std::cout << "FragTrap named '"<< name << "' has been initialised." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap '"<< this->_name <<"' has been destructed." << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& trap) : ClapTrap(trap) {
	*this = trap;
	std::cout << "FragTrap named '"<< trap._name << "' has been copied." << std::endl;
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& trap) {
	if (this != &trap) {
		ClapTrap::operator=(trap);
	}
	return *this;
}

/* Forwarding functions */

void FragTrap::attack(const std::string& target) {
	if (this->_energy_points <= 0) {
		std::cout << "FragTrap '" << this->_name << "' can't attack because is out of energy!" << std::endl;
		return;
	}
	if (this->_hit_points <= 0) {
		std::cout << "FragTrap '" << this->_name << "' can't attack because is dead!" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "FragTrap '" << this->_name << "' attacks '" << target << "', causing " << this->_attack_points << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (this->_hit_points <= amount) {
		std::cout << "FragTrap '" << _name << "' is dead!" << std::endl;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "FragTrap '" << this->_name << "' is attacked and takes " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points < amount) {
		std::cout << "FragTrap '" << _name << "' is out of energy!" << std::endl;
		return;
	}
	this->_hit_points += amount;
	this->_energy_points--;
	std::cout << "FragTrap '" << _name << "' has been repaired, recovering " << amount << " hit points!" << std::endl;
}

/* Public methods */

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap gives a positive high five!" << std::endl;
}
