/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:54:45 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/12 10:33:32 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
/* Constructors and destructor */

Cure::Cure(void): AMateria("cure") {
}

Cure::Cure(const Cure &cure): AMateria("cure") {
	*this = cure;
}

Cure& Cure::operator=(const Cure& cure) {
	if (this != &cure)
		this->_type = cure._type;
	return *this;
}

Cure::~Cure(void) {
}

/* Public methods */
AMateria* Cure::clone(void) const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
