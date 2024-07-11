/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:54:45 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 12:20:08 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
/* Constructors and destructor */

Ice::Ice(void): AMateria("ice") {
}

Ice::Ice(const Ice &ice): AMateria("ice") {
	*this = ice;
}

Ice& Ice::operator=(const Ice& ice) {
	if (this != &ice)
		this->_type = ice._type;
	return *this;
}

Ice::~Ice(void) {
}

/* Public methods */
AMateria* Ice::clone(void) const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}
