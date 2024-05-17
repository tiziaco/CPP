/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/05/17 17:05:51 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors and destructor

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap has been initialised." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& trap) {
	*this = trap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap) {
	if (this != &trap) {
		this->_name = trap._name;
		this->_hit_points = trap._hit_points;
		this->_energy_points = trap._energy_points;
		this->_attack_points = trap._attack_points;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap has been destructed." << std::endl;
}

// Public methods
void ClapTrap::attack(const std::string& target) {
	if (this->_energy_points <= 0)
		return ;
	this->_energy_points--;
	std::cout << "ClapTrap" << _name << "attacks" << target << ", causing" << this->_attack_points << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
}

void ClapTrap::beRepaired(unsigned int amount){
	this->_hit_points += amount;
	this->_energy_points--;
}
