#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

// General function to test successful signing and execution of the form
void testFormSuccessfulSignAndExecute(Bureaucrat& bureaucrat) {
	std::cout << "\n==== TEST: successful signing and execution ====\n" << std::endl;

	try {
		RobotomyRequestForm robotomyForm("Target A");
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
	std::cout << "\n==== TEST: execution fails due to low grade ====\n" << std::endl;
	
	try {
		RobotomyRequestForm robotomyForm("Target A");
		PresidentialPardonForm pardonForm("Target B");
		ShrubberyCreationForm shrubberyForm("Target C");

		std::cout << bureaucrat << "\n" << std::endl;

		std::cout << robotomyForm << "\n" << std::endl;
		bureaucrat.signForm(robotomyForm);
		bureaucrat.executeForm(robotomyForm);

		std::cout << "\n" << pardonForm << "\n" << std::endl;
		bureaucrat.signForm(pardonForm);
		bureaucrat.executeForm(pardonForm);

		std::cout << "\n" << shrubberyForm << "\n" << std::endl;
		bureaucrat.signForm(shrubberyForm);
		bureaucrat.executeForm(shrubberyForm);
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test failed signing due to low grade
void testFormSignFailDueToLowGrade(Bureaucrat& bureaucrat) {
	std::cout << "\n==== TEST: signing fails due to low grade ====\n" << std::endl;

	try {
		RobotomyRequestForm robotomyForm("Target A");
		PresidentialPardonForm pardonForm("Target B");
		ShrubberyCreationForm shrubberyForm("Target C");

		std::cout << bureaucrat << "\n" << std::endl;

		std::cout << robotomyForm << "\n" <<std::endl;
		bureaucrat.signForm(robotomyForm);  
		bureaucrat.executeForm(robotomyForm);

		std::cout << "\n" << pardonForm << "\n" << std::endl;
		bureaucrat.signForm(pardonForm);  
		bureaucrat.executeForm(pardonForm);

		std::cout << "\n" << shrubberyForm << "\n" << std::endl;
		bureaucrat.signForm(shrubberyForm);  
		bureaucrat.executeForm(shrubberyForm);
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// General function to test execution without signing the form
void testFormExecutionWithoutSigning(Bureaucrat& bureaucrat) {
	std::cout << "\n==== TEST: execution without signing ====\n" << std::endl;

	try {
		RobotomyRequestForm robotomyForm("Target A");
		PresidentialPardonForm pardonForm("Target B");
		ShrubberyCreationForm shrubberyForm("Target C");

		std::cout << bureaucrat << "\n" << std::endl;

		std::cout << robotomyForm << "\n" << std::endl;
		bureaucrat.executeForm(robotomyForm);

		std::cout << "\n" << pardonForm << "\n" << std::endl;
		bureaucrat.executeForm(pardonForm);

		std::cout << "\n" << shrubberyForm << "\n" << std::endl;
		bureaucrat.executeForm(shrubberyForm);
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

// Test the copy constructor and assignment operator for ShrubberyCreationForm
void testShrubberyCreationFormCopy() {
    std::cout << "\n=== TEST: ShrubberyCreationForm Copy Constructor and Assignment Operator ===\n" << std::endl;

    ShrubberyCreationForm original("OriginalTarget");

    // Test the copy constructor
    ShrubberyCreationForm copyConstructed(original);
    std::cout << "Copy constructed form: " << copyConstructed.getName() << std::endl;

    // Test the assignment operator
    ShrubberyCreationForm assigned = original;
    std::cout << "Assigned form: " << assigned.getName() << std::endl;
}

// Test the copy constructor and assignment operator for RobotomyRequestForm
void testRobotomyRequestFormCopy() {
    std::cout << "\n=== TEST: RobotomyRequestForm Copy Constructor and Assignment Operator ===\n" << std::endl;

    RobotomyRequestForm original("OriginalTarget");

    // Test the copy constructor
    RobotomyRequestForm copyConstructed(original);
    std::cout << "Copy constructed form: " << copyConstructed.getName() << std::endl;

    // Test the assignment operator
    RobotomyRequestForm assigned = original;
    std::cout << "Assigned form: " << assigned.getName() << std::endl;
}

// Test the copy constructor and assignment operator for PresidentialPardonForm
void testPresidentialPardonFormCopy() {
    std::cout << "\n=== TEST: PresidentialPardonForm Copy Constructor and Assignment Operator ===\n" << std::endl;

    PresidentialPardonForm original("OriginalTarget");

    // Test the copy constructor
    PresidentialPardonForm copyConstructed(original);
    std::cout << "Copy constructed form: " << copyConstructed.getName() << std::endl;

    // Test the assignment operator
    PresidentialPardonForm assigned = original;
    std::cout << "Assigned form: " << assigned.getName() << std::endl;
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

	testShrubberyCreationFormCopy();
    testRobotomyRequestFormCopy();
    testPresidentialPardonFormCopy();

	return 0;
}
