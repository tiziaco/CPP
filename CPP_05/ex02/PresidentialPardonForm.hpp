#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

class PresidentialPardonForm: public AForm
{
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

	void execute(Bureaucrat const & executor) const;
};


#endif
