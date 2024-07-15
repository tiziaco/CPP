/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:45:27 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/15 11:15:25 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Default constructor for WrongCat
WrongCat::WrongCat(void): WrongAnimal("DefaultWrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

// Parametrized constructor for WrongCat
WrongCat::WrongCat(std::string type): WrongAnimal(type) {
	std::cout << "WrongCat parametrized constructor called" << std::endl;
}

// Copy constructor for WrongCat
WrongCat::WrongCat(const WrongCat& cat): WrongAnimal(cat.type) {
	std::cout << "WrongCat copy constructor called for " << type << std::endl;
}

//Copy assignment operator for WrongCat
WrongCat& WrongCat::operator=(const WrongCat& cat) {
	if (this != &cat) {
		type = cat.type;
	}
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return *this;
}

// Destructor for WrongCat
WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

// Public functions

void WrongCat::makeSound(void) const {
	std::cout << type << " says Miaaooooo!" << std::endl;
}
