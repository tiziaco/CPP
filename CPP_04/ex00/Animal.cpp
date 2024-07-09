/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:37:58 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/09 16:12:31 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor for Animal
Animal::Animal(void): type("Undefined") {
	std::cout << "Animal default called for " << type << std::endl;
}

// Parametrized constructor for Animal
Animal::Animal(std::string type): type(type) {
	std::cout << "Animal parametrized constructor called for " << type << std::endl;
}

// Copy constructor for Animal
Animal::Animal(const Animal& animal): type(animal.type) {
	std::cout << "Animal copy constructor called for " << type << std::endl;
}

// Copy assignment operator for Animal
Animal& Animal::operator=(const Animal& animal) {
	if (this != &animal) {
		type = animal.type;
	}
	std::cout << "Animal copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for Animal
Animal::~Animal() {
}

// Accessors (getters and setters)

std::string Animal::getType(void) const {
	return type;
}

// Public functions

void Animal::makeSound(void) const {
	std::cout << "I'm a generic Animal. I don't make any sound!!" << std::endl;
}
