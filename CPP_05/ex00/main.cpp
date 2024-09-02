#include "Bureaucrat.hpp"

void testValidBureaucrat(void) {
	try {
		// Create Bureaucrat with valid grade
		Bureaucrat b1("Alice", 50);
		std::cout << b1 << std::endl;

		// Increase grade
		b1.increaseGrade();
		std::cout << b1 << std::endl;

		// Decrease grade
		b1.decreaseGrade();
		b1.decreaseGrade();
		std::cout << b1 << std::endl;
	
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

void testHighGradeBureaucrat(void) {
	try {
		// Create Bureaucrat with grade too high
		Bureaucrat b2("Bob", 0);  // This should throw a GradeTooHighException
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

void testLowGradeBureaucrat(void) {
	try {
		// Create Bureaucrat with grade too low
		Bureaucrat b3("Charlie", 151);  // This should throw a GradeTooLowException
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

int main() {
	testValidBureaucrat();
	testLowGradeBureaucrat();
	testHighGradeBureaucrat();

	return 0;
}
