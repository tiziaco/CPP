/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:45:27 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/09 16:15:20 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor for Dog
Dog::Dog(void): Animal("DefaultDog") {
	std::cout << "Dog default called for " << type << std::endl;
}

// Parametrized constructor for Dog
Dog::Dog(std::string type): Animal(type) {
	std::cout << "Dog parametrized constructor called" << std::endl;
}

// Copy constructor for Dog
Dog::Dog(const Dog& dog): Animal(dog) {
	std::cout << "Dog copy constructor called for " << type << std::endl;
}

// Copy assignment operator for Dog
Dog& Dog::operator=(const Dog& dog) {
	if (this != &dog) {
		type = dog.type;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for Dog
Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

// Public functions

void Dog::makeSound(void) const {
	std::cout << type << " says Bau Bau!" << std::endl;
}
