/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:19:22 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/15 10:52:08 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& materia_src) {
	*this = materia_src; 
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materia_src) {
	if ( this != &materia_src) {
		for (int i = 0; i < 4; i++) {
			/* if (_inventory[i])
				delete _inventory[i]; */
			if (materia_src._inventory[i])
				_inventory[i] = materia_src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

/* Public methods */

void MateriaSource::learnMateria(AMateria* materia) {
	if (materia == NULL)
		return;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL)
			continue;
		if (this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();
	}
	return NULL;
}
