/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:37:58 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 17:36:18 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Default constructor for AAnimal
AAnimal::AAnimal(void): type("Undefined") {
	std::cout << "Animal default called for " << type << std::endl;
}

// Parametrized constructor for Animal
AAnimal::AAnimal(std::string type): type(type) {
	std::cout << "Animal parametrized constructor called for " << type << std::endl;
}

// Copy constructor for Animal
AAnimal::AAnimal(const AAnimal& animal): type(animal.type) {
	std::cout << "Animal copy constructor called for " << type << std::endl;
}

// Copy assignment operator for Animal
AAnimal& AAnimal::operator=(const AAnimal& animal) {
	if (this != &animal) {
		type = animal.type;
	}
	std::cout << "Animal copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for Animal
AAnimal::~AAnimal() {
}

// Accessors (getters and setters)

std::string AAnimal::getType(void) const {
	return type;
}
