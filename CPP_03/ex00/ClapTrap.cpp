/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 15:59:58 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors and destructor

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap has been initialised with the default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name) {
	this->_energy_points = 10;
	this->_hit_points = 10;
	this->_attack_points = 0;
	std::cout << "ClapTrap named '"<< name << "' has been initialised." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& trap) {
	*this = trap;
	std::cout << "ClapTrap named '"<< trap._name << "' has been copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap) {
	if (this != &trap) {
		this->_name = trap._name;
		this->_hit_points = trap._hit_points;
		this->_energy_points = trap._energy_points;
		this->_attack_points = trap._attack_points;
	}
	std::cout << "Assignment operator calld from '"<< trap._name << "'."<< std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap '"<< this->_name <<"' has been destructed." << std::endl;
}

// Public methods
void ClapTrap::attack(const std::string& target) {
	if (this->_energy_points <= 0) {
		std::cout << "ClapTrap '" << this->_name << "' can't attack because is out of energy!" << std::endl;
		return;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap '" << this->_name << "' can't attack because is dead!" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "ClapTrap '" << this->_name << "' attacks '" << target << "', causing " << this->_attack_points << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit_points <= amount) {
		std::cout << "ClapTrap '" << _name << "' is dead!" << std::endl;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "ClapTrap '" << this->_name << "' is attacked and takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points < amount) {
		std::cout << "ClapTrap '" << _name << "' is out of energy!" << std::endl;
		return;
	}
	this->_hit_points += amount;
	this->_energy_points--;
	std::cout << "ClapTrap '" << _name << "' has been repaired, recovering " << amount << " hit points!" << std::endl;
}
