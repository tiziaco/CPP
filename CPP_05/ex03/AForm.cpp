#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* Constructor and destructor */
/* AForm::AForm()
	: _name("Unnamed"), _is_signed(false), _grade_sign(1), _grade_exec(1) {
} */

AForm::AForm(std::string const name, int grade_sign, int grade_exec): 
	_name(name), _grade_sign(grade_sign), _grade_exec(grade_exec) {
		 this->_is_signed = false;
}

AForm::~AForm(void) {
}

/* Copy operator */

AForm& AForm::operator=(const AForm& form) {
	if(this != &form) {
		_is_signed = form._is_signed;
	}
	return *this;
}

AForm::AForm(const AForm& form): _name(form.getName()), _is_signed(form.isSigned()),
	_grade_sign(form.getGradeSign()), _grade_exec(form.getGradeExec()) {

	if (_grade_sign < 1 || _grade_exec < 1)
		throw GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw GradeTooLowException();

	this->_is_signed = false;
}

/* << operator */

std::ostream&   operator<<(std::ostream& out, const AForm& form) {
	out << "Form name: "<< form.getName() << " | Is signed: " << (form.isSigned() ? "Yes": "No");
	out << " | Grade to sign: "<< form.getGradeSign();
	out << " | Grade to execute: "<< form.getGradeExec();
	return out;
}

/* Getters */

std::string AForm::getName() const {
	return this->_name;
}

bool AForm::isSigned() const {
	return this->_is_signed;
}

int AForm::getGradeSign() const {
	return this->_grade_sign;
}

int AForm::getGradeExec() const {
	return this->_grade_exec;
}

/* Member functions */
void AForm::beSigned(const Bureaucrat& burocreat) {
	
	if (burocreat.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	this->_is_signed = true;
}

/* void AForm::execute(Bureaucrat const & executor) const {
	std::cout << "This is the standard form executor" << std::endl;
} */

/* Exeptions */

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

const char* AForm::FormNotSigned::what() const throw() {
	return "Form not signed!";
}
