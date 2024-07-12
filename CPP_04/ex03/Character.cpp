/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:43:12 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/12 12:10:55 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructors and destructor */

Character::Character(void): _name("default") {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string name): _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character '" << this->_name << "' created" << std::endl;
}

Character::Character(const Character& character) {
	/* this->_name = character._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = character._inventory[i]; */
	*this = character; //TODO:: test with both options
}

Character& Character::operator=(const Character& character) {
	if ( this != &character) {
		this->_name = character._name;
		for (int i = 0; i < 4; i++) {
			/* if (_inventory[i])
				delete _inventory[i]; */
			if (character._inventory[i])
				_inventory[i] = character._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character(void) {
	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

/* Public methods */

std::string const& Character::getName(void) const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			std::cout << "Character '" << this->_name << "' has equiped '" << m->getType() << "'." << std::endl;
			return;
		}
	}
	std::cout << "Character '" << this->_name << "' has no space available in its inventory." << std::endl;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL) {
		std::cout << "Character '" << this->_name << "' unequipped '" << this->_inventory[idx]->getType() << "'." <<std::endl;
		// delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		return;
	}
	std::cout << "Character '" << this->_name << "' can't unequip object ID '" << idx << "'." <<std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL) {
		std::cout << "Character '" << this->_name << "' uses object ID '" << this->_inventory[idx]->getType() << \
			"' against '" << target.getName() << "'." << std::endl;
		this->_inventory[idx]->use(target);
		return;
	}
	std::cout << "Character '" << this->_name << "' can't use object ID '" << idx << "'." <<std::endl;
}
