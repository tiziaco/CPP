#include "Intern.hpp"

/* Constructor and destructor */

Intern::Intern::Intern() {
}

Intern::Intern::~Intern() {
}

/* Copy constructor */
Intern::Intern(const Intern& intern): Intern(intern) {
}

/* Copy operator */
Intern& Intern::operator=(const Intern& intern) {
	if (this != &intern) {
		return *this;
	}
}

void Intern::makeForm(const std::string formName, const std::string target) {

}