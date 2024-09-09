#include "ShrubberyCreationForm.hpp"

/* Constructor and destructor */

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): 
	AForm("ShrubberyCreationForm", 145, 137), 
	_target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

/* Copy constructor */
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), _target(other._target) {
}

/* Copy assignment operator */
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

/* Member concrete functions */

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	// Check if the form is signed and if the executor has sufficient grade
	if (!isSigned())
		throw AForm::FormNotSigned();
	if (executor.getGrade() > getGradeExec())
		throw AForm::GradeTooLowException();

	// Create the file with the target name and "_shrubbery" suffix
	std::ofstream file((_target + "_shrubbery").c_str());

	// Check if the file stream opened successfully
	if (!file.is_open()) {
		std::cerr << "Error: Could not create the file " << _target + "_shrubbery" << std::endl;
		return;
	}

	// Write ASCII trees into the file
	file << "       ccee88oo\n"
			"  C8O8O8Q8PoOb o8oo\n"
			" dOB69QO8PdUOpugoO9bD\n"
			"CgggbU8OU qOp qOdoUOdcb\n"
			"   6OuU  /p u gcoUodpP\n"
			"      \\\\//  /douUP\n"
			"        \\\\////\n"
			"         |||/\\\n"
			"         |||\\/\n"
			"         |||||\n"
			"   .....//||||\\....\n";

	// Close the file
	file.close();
}
