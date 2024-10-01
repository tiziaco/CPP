#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
	try {
		Intern intern;

		// Create a Presidential Pardon Form
		AForm* form1 = intern.makeForm("presidential pardon", "Alice");
		std::cout << "Created form: " << form1->getName() << std::endl;
		delete form1;  // Remember to clean up

		// Create a Robotomy Request Form
		AForm* form2 = intern.makeForm("robotomy request", "Bob");
		std::cout << "Created form: " << form2->getName() << std::endl;
		delete form2;  // Clean up

		// Create a Shrubbery Creation Form
		AForm* form3 = intern.makeForm("shrubbery creation", "Charlie");
		std::cout << "Created form: " << form3->getName() << std::endl;
		delete form3;  // Clean up

		// Try creating a form with an invalid type
		AForm* form4 = intern.makeForm("unknown form", "David");
		delete form4;  // Clean up if somehow created (it shouldn't)
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
