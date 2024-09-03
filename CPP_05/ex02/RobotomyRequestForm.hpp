#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm: public AForm
{
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};


#endif
