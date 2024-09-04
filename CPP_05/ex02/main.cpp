#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

// General function to test successful signing and execution of the form
void testFormSuccessfulSignAndExecute(Bureaucrat& bureaucrat) {
	std::cout << "\n==== Tests successful signing and execution ====\n" << std::endl;

	try {
		RobotomyRequestForm robotomyForm;
		PresidentialPardonForm pardonForm("Target B");
		ShrubberyCreationForm shrubberyForm("Target C");

		std::cout << bureaucrat << "\n" << std::endl;

		std::cout << robotomyForm << "\n" << std::endl;
		bureaucrat.signForm(robotomyForm);
		bureaucrat.executeForm(robotomyForm);

		std::cout << "\n" << pardonForm << "\n" << std::endl;
		bureaucrat.signForm(pardonForm);
		bureaucrat.executeForm(pardonForm);

		std::cout << std::endl;
		std::cout << "\n" << shrubberyForm << "\n"<< std::endl;
		bureaucrat.signForm(shrubberyForm);
		bureaucrat.executeForm(shrubberyForm);
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test signing but failing to execute due to low grade
void testFormExecutionFailDueToLowGrade(Bureaucrat& bureaucrat) {
	std::cout << "\n==== Tests execution fails due to low grade ====\n" << std::endl;
	
	try {
		RobotomyRequestForm robotomyForm;
		PresidentialPardonForm pardonForm("Target B");
		ShrubberyCreationForm shrubberyForm("Target C");

		std::cout << bureaucrat << std::endl;
		std::cout << robotomyForm << std::endl;

		bureaucrat.signForm(robotomyForm);
		bureaucrat.executeForm(robotomyForm);

		std::cout << pardonForm << std::endl;
		bureaucrat.signForm(pardonForm);
		bureaucrat.executeForm(pardonForm);

		std::cout << shrubberyForm << std::endl;
		bureaucrat.signForm(shrubberyForm);
		bureaucrat.executeForm(shrubberyForm);
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test failed signing due to low grade
void testFormSignFailDueToLowGrade(Bureaucrat& bureaucrat) {
	std::cout << "\n==== Test signing fails due to low grade ====\n" << std::endl;

	try {
		RobotomyRequestForm robotomyForm;
		PresidentialPardonForm pardonForm("Target B");
		ShrubberyCreationForm shrubberyForm("Target C");

		std::cout << bureaucrat << std::endl;
		std::cout << robotomyForm << std::endl;

		bureaucrat.signForm(robotomyForm);  
		bureaucrat.executeForm(robotomyForm);

		std::cout << pardonForm << std::endl;
		bureaucrat.signForm(pardonForm);  
		bureaucrat.executeForm(pardonForm);

		std::cout << shrubberyForm << std::endl;
		bureaucrat.signForm(shrubberyForm);  
		bureaucrat.executeForm(shrubberyForm);
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test execution without signing the form
void testFormExecutionWithoutSigning(Bureaucrat& bureaucrat) {
	std::cout << "\n==== Test execution without signing ====\n" << std::endl;

	try {
		RobotomyRequestForm robotomyForm;
		PresidentialPardonForm pardonForm("Target B");
		ShrubberyCreationForm shrubberyForm("Target C");

		std::cout << bureaucrat << std::endl;
		std::cout << robotomyForm << std::endl;

		bureaucrat.executeForm(robotomyForm);

		std::cout << pardonForm << std::endl;
		bureaucrat.executeForm(pardonForm);

		std::cout << shrubberyForm << std::endl;
		bureaucrat.executeForm(shrubberyForm);
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

int main() {
	Bureaucrat bob("Bob", 3);
	Bureaucrat alice("Alice", 50);
	Bureaucrat charlie("Charlie", 150);
	Bureaucrat dave("Dave", 30);

	testFormSuccessfulSignAndExecute(bob);
	testFormExecutionFailDueToLowGrade(alice);
	testFormSignFailDueToLowGrade(charlie);
	testFormExecutionWithoutSigning(dave);

	return 0;
}
