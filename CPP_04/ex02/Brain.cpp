/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:02:20 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 16:56:13 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain) {
	if (this != &brain) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return *this;
}

Brain::Brain(const Brain& brain) {
	*this = brain;
	std::cout << "Brain copy constructor called for " << std::endl;
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	}
	return "";
}
