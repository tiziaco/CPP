/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:45:27 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 16:56:35 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor for Dog
Dog::Dog(void): Animal("DefaultDog"), brain(new Brain()) {
	std::cout << "Dog default called for " << type << std::endl;
}

// Parametrized constructor for Dog
Dog::Dog(std::string type): Animal(type), brain(new Brain()) {
	std::cout << "Dog parametrized constructor called" << std::endl;
}

// Copy constructor for Dog
Dog::Dog(const Dog& dog): Animal(dog), brain(new Brain(*dog.brain))  {
	std::cout << "Dog copy constructor called for " << type << std::endl;
}

// Copy assignment operator for Dog
Dog& Dog::operator=(const Dog& dog) {
	if (this != &dog) {
		type = dog.type;
		delete brain;
		brain = new Brain(*dog.brain);
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for Dog
Dog::~Dog(void) {
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

// Public functions

void Dog::makeSound(void) const {
	std::cout << type << " says Bau Bau!" << std::endl;
}

Brain* Dog::getBrain() const {
	return brain;
}
