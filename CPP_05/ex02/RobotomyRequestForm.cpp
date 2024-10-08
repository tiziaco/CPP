#include "RobotomyRequestForm.hpp"
#include <cstdlib> // for rand()
#include <ctime>   // for time()

/* Constructor and destructor */

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
	AForm("RobotomyRequestForm", 72, 45),
	_target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

/* Copy assignment operator */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other), _target(other._target) {
}

/* Member concrete functions */

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!this->isSigned())
		throw FormNotSigned();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	
	std::cout << "* drilling noises *" << std::endl;
	srand(time(0)); // Seed for randomness
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed!" << std::endl;
}
