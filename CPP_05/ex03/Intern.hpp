#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);

	void makeForm(const std::string formName, const std::string target);
};

#endif