/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:37:58 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/15 11:00:41 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor for Animal
WrongAnimal::WrongAnimal(void): type("Undefined") {
	std::cout << "WrongAnimal default called for " << type << std::endl;
}

// Parametrized constructor for WrongAnimal
WrongAnimal::WrongAnimal(std::string type): type(type) {
	std::cout << "WrongAnimal parametrized constructor called for " << type << std::endl;
}

// Copy constructor for WrongAnimal
WrongAnimal::WrongAnimal(const WrongAnimal& animal): type(animal.type) {
	std::cout << "WrongAnimal copy constructor called for " << type << std::endl;
}

// Copy assignment operator for WrongAnimal
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal) {
	if (this != &animal) {
		type = animal.type;
	}
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for WrongAnimal
WrongAnimal::~WrongAnimal() {
}

// Accessors (getters and setters)

std::string WrongAnimal::getType(void) const {
	return type;
}

// Public functions

void WrongAnimal::makeSound(void) const {
	std::cout << "I'm WrongAnimal. This is a wrong sound!!" << std::endl;
}
