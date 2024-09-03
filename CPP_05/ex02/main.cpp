#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

// Test successful signing and execution of the form
void testSuccessfulSignAndExecute() {
	try {
		Bureaucrat bob("Bob", 40); // Bureaucrat with a sufficient grade
		RobotomyRequestForm form;  // Form requiring grade 72 to sign and 45 to execute

		std::cout << "\n*** TEST: Successful sign and execute ***\n" << std::endl;
		std::cout << bob << std::endl;
		std::cout << form << std::endl;

		bob.signForm(form); // Bob signs the form
		bob.executeForm(form); // Bob executes the form
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// Test signing but failing to execute due to low grade
void testExecutionFailDueToLowGrade() {
	try {
		Bureaucrat alice("Alice", 50); // Bureaucrat with a lower grade than required for execution
		RobotomyRequestForm form; // Form requiring grade 72 to sign and 45 to execute

		std::cout << "\n*** TEST: Signing succeeds but execution fails due to low grade ***\n" << std::endl;
		std::cout << alice << std::endl;
		std::cout << form << std::endl;

		alice.signForm(form); // Alice signs the form
		alice.executeForm(form); // Alice tries to execute the form, should fail
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// Test failed signing due to low grade
void testSignFailDueToLowGrade() {
	try {
		Bureaucrat charlie("Charlie", 150); // Bureaucrat with the lowest grade
		RobotomyRequestForm form; // Form requiring grade 72 to sign and 45 to execute

		std::cout << "\n*** TEST: Signing fails due to low grade ***\n" << std::endl;
		std::cout << charlie << std::endl;
		std::cout << form << std::endl;

		charlie.signForm(form); // Charlie tries to sign the form, should fail
		charlie.executeForm(form); // Charlie tries to execute the form, should not even reach this point
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// Test execution without signing the form
void testExecutionWithoutSigning() {
	try {
		Bureaucrat dave("Dave", 30); // Bureaucrat with a high enough grade
		RobotomyRequestForm form;    // Form requiring grade 72 to sign and 45 to execute

		std::cout << "\n*** TEST: Execution fails because the form is not signed ***\n" << std::endl;
		std::cout << dave << std::endl;
		std::cout << form << std::endl;

		dave.executeForm(form); // Dave tries to execute the form without signing it
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

int main() {
	testSuccessfulSignAndExecute();
	testExecutionFailDueToLowGrade();
	testSignFailDueToLowGrade();
	testExecutionWithoutSigning();

	return 0;
}
