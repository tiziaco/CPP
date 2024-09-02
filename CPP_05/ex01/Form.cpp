#include "Form.hpp"
#include "Bureaucrat.hpp"

/* Constructor and destructor */

Form::Form(void): _name("BasicForm"), _is_signed(false), _grade_sign(150), _grade_exec(150) {
}

Form::Form(std::string const name, int grade_sign, int grade_exec): 
	_name(name), _is_signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
}

Form::~Form(void) {
}

/* Copy operator */

Form& Form::operator=(const Form& form) {
	if(this != &form) {
	}
	return *this;
}

Form::Form(const Form& form): _name(form.getName()), _is_signed(form.isSigned()),
	_grade_sign(form.getGradeSign()), _grade_exec(form.getGradeExec()) {

	if (_grade_sign < 1 || _grade_exec < 1)
		throw GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw GradeTooLowException();

	this->_is_signed = false;
}

/* << operator */

std::ostream&   operator<<(std::ostream& out, const Form& form) {
	out << "Form name: "<< form.getName() << " | Is signed: " << (form.isSigned() ? "Yes": "No");
	out << " | Grade to sign: "<< form.getGradeSign();
	out << " | Grade to execute: "<< form.getGradeExec();
	return out;
}

/* Getters */

std::string Form::getName() const {
	return this->_name;
}

bool Form::isSigned() const {
	return this->_is_signed;
}

int Form::getGradeSign() const {
	return this->_grade_sign;
}

int Form::getGradeExec() const {
	return this->_grade_exec;
}

/* Member functions */
void Form::beSigned(const Bureaucrat& burocreat) {
	
	if (burocreat.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	this->_is_signed = true;
}

/* Exeptions */

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
