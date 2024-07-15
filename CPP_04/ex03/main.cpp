/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:06:28 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/15 15:58:51 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void testIceClass() {
	// Create a character
	Character target("Target");

	// Create an Ice instance
	Ice ice1;

	// Use the Ice instance
	std::cout << "\tT1. Using ice1 on target:" << std::endl;
	ice1.use(target);

	// Use the copy constructor
	Ice ice2(ice1);
	std::cout << "\tT2. Using ice2 (copy constructed) on target:" << std::endl;
	ice2.use(target);

	// Use the copy assignment operator
	Ice ice3;
	ice3 = ice1;
	std::cout << "\tT3. Using ice3 (copy assigned) on target:" << std::endl;
	ice3.use(target);

	// Use the clone method
	AMateria* iceClone = ice1.clone();
	std::cout << "\tT4. Using iceClone on target:" << std::endl;
	iceClone->use(target);

	// Clean up cloned object
	delete iceClone;
}

void testCureClass() {
	// Create a character
	Character target("Target");

	// Create a Cure instance
	Cure cure1;

	// Use the Cure instance
	std::cout << "\tT1. Using cure1 on target:" << std::endl;
	cure1.use(target);

	// Use the copy constructor
	Cure cure2(cure1);
	std::cout << "\tT2. Using cure2 (copy constructed) on target:" << std::endl;
	cure2.use(target);

	// Use the copy assignment operator
	Cure cure3;
	cure3 = cure1;
	std::cout << "\tT3. Using cure3 (copy assigned) on target:" << std::endl;
	cure3.use(target);

	// Use the clone method
	AMateria* cureClone = cure1.clone();
	std::cout << "\tT4. Using cureClone on target:" << std::endl;
	cureClone->use(target);

	// Clean up cloned object
	delete cureClone;
}

void testCharacterClass() {
	// Create a character
	Character character1("Hero");

	// Create some Cure instances
	Cure* cure1 = new Cure();
	Cure* cure2 = new Cure();

	// Equip the character with Cure instances
	std::cout << "\tT1. Equipping character1 with cure1 and cure2:" << std::endl;
	character1.equip(cure1);
	character1.equip(cure2);

	// Use the equipped Cures
	Character target("Target");
	std::cout << "\tT2. Using equipped cures on target:" << std::endl;
	character1.use(0, target);
	character1.use(1, target);

	// Use the copy constructor
	std::cout << "\tT3. Using character2 (copy constructed) on target:" << std::endl;
	Character character2(character1);
	character2.use(0, target);
	character2.use(1, target);

	// Use the copy assignment operator
	std::cout << "\tT4. Using character3 (copy assigned) on target:" << std::endl;
	Character character3;
	character3 = character1;
	character3.use(0, target);
	character3.use(1, target);

	// Unequip a Cure
	std::cout << "\tT5. Unequipping cure2 from character1:" << std::endl;
	character1.unequip(1);
	character1.use(1, target); // Should not use anything

	// Clean up dynamically allocated objects
	// delete cure1;
	delete cure2; // Since cure2 was unequipped, it needs to be deleted manually
}

void testMateriaSource() {
	MateriaSource source;
	Character character("testChar");

	// Learn some materias
	source.learnMateria(new Ice());
	source.learnMateria(new Cure());

	// Create and use materias
	AMateria* ice = source.createMateria("ice");
	AMateria* cure = source.createMateria("cure");

	if (ice) {
		ice->use(character); // Expected output: "casts ice spell"
	} else {
		std::cout << "Failed to create ice materia\n";
	}

	if (cure) {
		cure->use(character); // Expected output: "casts cure spell"
	} else {
		std::cout << "Failed to create cure materia\n";
	}

	// Clean up created materias
	delete ice;
	delete cure;
}

void testSubject() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

int main() {
	std::cout << "\n*** TEST Ice Class ***" << std::endl;
	testIceClass();

	std::cout << "\n*** TEST Cure Class ***" << std::endl;
	testCureClass();

	std::cout << "\n*** TEST Character Class ***" << std::endl;
	testCharacterClass();

	std::cout << "\n*** TEST MateriaSource Class ***" << std::endl;
	testMateriaSource();

	std::cout << "\n*** TEST from Subject ***" << std::endl;
	testSubject();

	return 0;
}
