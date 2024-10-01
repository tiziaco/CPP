#include "Intern.hpp"

/* Constructor and destructor */

Intern::Intern::Intern() {
}

Intern::Intern::~Intern() {
}

/* Copy constructor */
Intern::Intern(const Intern& intern) {
	*this = intern;
}

/* Copy operator */
Intern& Intern::operator=(const Intern& intern) {
	if (this != &intern) {
	}
	return *this;
}

// Static functions to create the specific forms
static AForm* createPresidentialPardon(const std::string& target) {
	return new PresidentialPardonForm(target);
}

static AForm* createRobotomyRequest(const std::string& target) {
	return new RobotomyRequestForm(target);
}

static AForm* createShrubberyCreation(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(const std::string formName, const std::string target) {
	FormType formTypes[] = {
		{"presidential pardon", createPresidentialPardon},
		{"robotomy request", createRobotomyRequest},
		{"shrubbery creation", createShrubberyCreation},
	};

	for (size_t i = 0; i < 3; ++i) {
		if (formTypes[i].name == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			return formTypes[i].create(target);
		}
	}

	throw std::invalid_argument("Form type not recognized: " + formName);
}
