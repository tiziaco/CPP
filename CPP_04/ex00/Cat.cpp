/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:45:27 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/09 16:14:58 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor for Cat
Cat::Cat(void): Animal("DefaultCat") {
	std::cout << "Cat default constructor called" << std::endl;
}

// Parametrized constructor for Cat
Cat::Cat(std::string type): Animal(type) {
	std::cout << "Cat parametrized constructor called" << std::endl;
}

// Copy constructor for Cat
Cat::Cat(const Cat& cat): Animal(cat.type) {
	std::cout << "Cat copy constructor called for " << type << std::endl;
}

//Copy assignment operator for Cat
Cat& Cat::operator=(const Cat& cat) {
	if (this != &cat) {
		type = cat.type;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for Cat
Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

// Public functions

void Cat::makeSound(void) const {
	std::cout << type << " says Miaaooooo!" << std::endl;
}
