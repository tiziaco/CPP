/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:35:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/02 17:39:07 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors and destructor

FragTrap::FragTrap(void) {
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

/* Forwarding functions */

void FragTrap::attack(const std::string& target) {
    ClapTrap::attack(target);
}

void FragTrap::takeDamage(unsigned int amount) {
    ClapTrap::takeDamage(amount);
}

void FragTrap::beRepaired(unsigned int amount) {
    ClapTrap::beRepaired(amount);
}

/* Public methods */

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap gives a positive high five!" << std::endl;
}
