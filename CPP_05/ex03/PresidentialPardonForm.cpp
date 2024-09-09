#include "PresidentialPardonForm.hpp"

/* Constructor and destructor */

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): 
	AForm("PresidentialPardonForm", 25, 5), 
	_target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

/* Copy constructor */
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other), _target(other._target) {
}

/* Copy assignment operator */
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other) {
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

/* Member concrete functions */

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	// Check if the form is signed and if the executor has sufficient grade
	if (!isSigned())
		throw AForm::FormNotSigned();
	if (executor.getGrade() > getGradeExec())
		throw AForm::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
