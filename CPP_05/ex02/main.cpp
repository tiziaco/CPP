#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

// General function to test successful signing and execution of the form
void testFormSuccessfulSignAndExecute(Bureaucrat& bureaucrat, AForm& form) {
	try {
		std::cout << "\n*** TEST: Successful sign and execute ***\n" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		bureaucrat.signForm(form); // Bureaucrat signs the form
		bureaucrat.executeForm(form); // Bureaucrat executes the form
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test signing but failing to execute due to low grade
void testFormExecutionFailDueToLowGrade(Bureaucrat& bureaucrat, AForm& form) {
	try {
		std::cout << "\n*** TEST: Signing succeeds but execution fails due to low grade ***\n" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		bureaucrat.signForm(form); // Bureaucrat signs the form
		bureaucrat.executeForm(form); // Bureaucrat tries to execute the form, should fail
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test failed signing due to low grade
void testFormSignFailDueToLowGrade(Bureaucrat& bureaucrat, AForm& form) {
	try {
		std::cout << "\n*** TEST: Signing fails due to low grade ***\n" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		bureaucrat.signForm(form); // Bureaucrat tries to sign the form, should fail
		bureaucrat.executeForm(form); // Bureaucrat tries to execute the form, should not even reach this point
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test execution without signing the form
void testFormExecutionWithoutSigning(Bureaucrat& bureaucrat, AForm& form) {
	try {
		std::cout << "\n*** TEST: Execution fails because the form is not signed ***\n" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		bureaucrat.executeForm(form); // Bureaucrat tries to execute the form without signing it
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

int main() {
	// Create bureaucrats with various grades
	Bureaucrat bob("Bob", 3);
	Bureaucrat alice("Alice", 50);
	Bureaucrat charlie("Charlie", 150);
	Bureaucrat dave("Dave", 30);

	// Create forms with specific grade requirements
	RobotomyRequestForm		robotomyForm;
	PresidentialPardonForm	pardonForm("Target B");
	ShrubberyCreationForm	shrubberyForm("Target C");

	std::cout << "\n==== Tests successfull signing and execution ====\n" << std::endl;
	testFormSuccessfulSignAndExecute(bob, robotomyForm);
	testFormSuccessfulSignAndExecute(bob, pardonForm);
	testFormSuccessfulSignAndExecute(bob, shrubberyForm);

	std::cout << "\n==== Tests execution fails due to low grade ====\n" << std::endl;
	testFormExecutionFailDueToLowGrade(alice, robotomyForm);
	testFormExecutionFailDueToLowGrade(alice, pardonForm);
	testFormExecutionFailDueToLowGrade(alice, shrubberyForm);

	std::cout << "\n==== Test signing fails due to low grade ====\n" << std::endl;
	testFormSignFailDueToLowGrade(charlie, robotomyForm);
	testFormSignFailDueToLowGrade(charlie, pardonForm);
	testFormSignFailDueToLowGrade(charlie, shrubberyForm);

	std::cout << "\n==== Test execution without signing ====\n" << std::endl;
	testFormExecutionWithoutSigning(dave, robotomyForm);
	testFormExecutionWithoutSigning(dave, pardonForm);
	testFormExecutionWithoutSigning(dave, shrubberyForm);

	return 0;
}
