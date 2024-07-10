/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:45:27 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 17:37:22 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor for Cat
Cat::Cat(void): AAnimal("DefaultCat"), brain(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
}

// Parametrized constructor for Cat
Cat::Cat(std::string type): AAnimal(type), brain(new Brain()) {
	std::cout << "Cat parametrized constructor called" << std::endl;
}

// Copy constructor for Cat
Cat::Cat(const Cat& cat): AAnimal(cat.type), brain(new Brain(*cat.brain)) {
	std::cout << "Cat copy constructor called for " << type << std::endl;
}

//Copy assignment operator for Cat
Cat& Cat::operator=(const Cat& cat) {
	if (this != &cat) {
		type = cat.type;
		delete brain;
		brain = new Brain(*cat.brain);
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for Cat
Cat::~Cat(void) {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

// Public functions

void Cat::makeSound(void) const {
	std::cout << type << " says Miaaooooo!" << std::endl;
}

Brain* Cat::getBrain() const {
	return brain;
}
