/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:47:53 by tiacovel          #+#    #+#             */
/*   Updated: 2024/07/10 17:46:01 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void test_subject(void) {
	// const AAnimal* meta = new AAnimal(); 
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	// delete meta;
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

void test_deep_copy(void) {
	Cat cat1("Siamese");
	Cat cat2("Persian");

	// Set an idea in cat1's brain
	cat1.getBrain()->setIdea(0, "Chase mice");

	// Testing copy assignment operator
	cat2 = cat1;

	// Verify that the copied cat has the same idea
	std::cout << "cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

	// Change the idea in cat2 and verify that cat1's idea is unchanged
	cat2.getBrain()->setIdea(0, "Sleep all day");

	std::cout << "After changing cat2's idea[0]:" << std::endl;
	std::cout << "cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

}

int main(void) {
	
	std::cout << "\n*** Test from the subject ***" << std::endl;
	test_subject();

	std::cout << "\n*** My tests ***" << std::endl;
	my_tests();

	std::cout << "\n*** Test deep copy ***" << std::endl;
	test_deep_copy();

	return 0;
}
