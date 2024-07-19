#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150) {
}

Bureaucrat::Bureaucrat(const std::string name, int grade): 
	_name(name), _grade(grade) {
	if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) {
	*this = bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
	if(this != &bureaucrat) {
		this->_grade = bureaucrat._grade;
	}
	return *this;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void Bureaucrat::increaseGrade(void) {
	if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decreaseGrade(void) {
	if (this->_grade + 1 < 1)
        throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& bureaucrat) {
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}
