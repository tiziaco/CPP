/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:47:53 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/15 11:14:19 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void test_subject(void) {
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
}

void test_cat_class(void) {
	Cat cat1("Siamese");
	Cat cat2("Persian");

	// Test cat makeSound
	cat1.makeSound();
	cat2.makeSound();
	
	// Testing copy assignment operator
	cat1 = cat2;
	// Testing copy constructor
	Cat cat3(cat2);
}

void test_dog_class(void) {
	Dog dog1("Beagle");
	Dog dog2("trex");

	// Test dog makeSound
	dog1.makeSound();
	dog2.makeSound();

	// Testing copy assignment operator
	dog1 = dog2;
	
	// Testing copy constructor
	Dog dog3(dog2);
}

void test_WrongCat_class(void) {
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
	std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
	wrong->makeSound();
	wrongCat->makeSound();

	delete  wrong;
	delete  wrongCat;
}

int main(void) {
	
	std::cout << "\n*** Test from the subject ***" << std::endl;
	test_subject();

	std::cout << "\n*** Test Cat Class ***" << std::endl;
	test_cat_class();

	std::cout << "\n*** Test Dog Class ***" << std::endl;
	test_dog_class();

	std::cout << "\n*** Test WrongCat Class ***" << std::endl;
	test_WrongCat_class();

	return 0;
}
