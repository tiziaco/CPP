/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:34:43 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/11 11:54:20 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructor and destructor */

AMateria::AMateria( void ) : _type("") {
}

AMateria::AMateria(std::string const & type): _type(type) {
}

AMateria::~AMateria() {
}

// Copy constructor
AMateria::AMateria(const AMateria& materia) {
	*this = materia;
}

/* Accessor */

std::string const & AMateria::getType() const {
	return this->_type;
}