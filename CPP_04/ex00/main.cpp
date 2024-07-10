/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:47:53 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 17:46:37 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

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

void my_tests(void) {
	/* Test Cat class */
	Cat cat1("Siamese");
	Cat cat2("Persian");

	// Test cat makeSound
	cat1.makeSound();
	cat2.makeSound();
	
	// Testing copy assignment operator
	cat1 = cat2;
	// Testing copy constructor
	Cat cat3(cat2);

	/* Test Dog class */
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

int main(void) {
	
	std::cout << "\n*** Test from the subject ***" << std::endl;
	test_subject();

	std::cout << "\n*** My tests ***" << std::endl;
	my_tests();

	return 0;
}
