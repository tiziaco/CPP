#include "RobotomyRequestForm.hpp"
#include <cstdlib> // for rand()
#include <ctime>   // for time()

/* Constructor and destructor */

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

/* Copy constructor */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other) {
}

/* Copy assignment operator */
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other) {
		AForm::operator=(other);
	}
	return *this;
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
        std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed!" << std::endl;
}
