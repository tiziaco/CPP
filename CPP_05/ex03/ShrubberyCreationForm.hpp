#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

class ShrubberyCreationForm: public AForm
{
private:
	std::string _target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

	void execute(Bureaucrat const & executor) const;
};


#endif
