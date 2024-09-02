#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

// Test function for a valid Bureaucrat
void testValidBureaucrat() {
	try {
		Bureaucrat john("John", 5); // A Bureaucrat with a grade of 5
		Form formA("FormA", 10, 5); // A Form that requires grade 10 to sign, 5 to execute

		std::cout << "*** Testing valid Bureaucrat signing form ***" << std::endl;
		std::cout << john << std::endl;
		std::cout << formA << std::endl;

		john.signForm(formA); // John should be able to sign FormA
		std::cout << formA << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

// Test function for a Bureaucrat with a low grade
void testLowGradeBureaucrat() {
	try {
		Bureaucrat alice("Alice", 50); // Bureaucrat with a grade of 50
		Form formB("FormB", 20, 15);   // A Form that requires grade 20 to sign, 15 to execute

		std::cout << "*** Testing low-grade Bureaucrat trying to sign form ***" << std::endl;
		std::cout << alice << std::endl;
		std::cout << formB << std::endl;

		alice.signForm(formB); // Alice should fail to sign FormB
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

// Test function for a Bureaucrat with a too high grade (low number)
void testHighGradeBureaucrat() {
	try {
		Bureaucrat bob("Bob", 1);    // Bureaucrat with the highest grade (1)
		Form formC("FormC", 2, 2);   // A Form that requires grade 2 to sign and execute

		std::cout << "*** Testing high-grade Bureaucrat signing form ***" << std::endl;
		std::cout << bob << std::endl;
		std::cout << formC << std::endl;

		bob.signForm(formC); // Bob should be able to sign FormC easily
		std::cout << formC << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main() {
	testValidBureaucrat();
	testLowGradeBureaucrat();
	testHighGradeBureaucrat();

	return 0;
}
