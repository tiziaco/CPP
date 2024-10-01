#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

struct FormType {
	std::string name;
	AForm* (*create)(const std::string&);
};

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);

	AForm* makeForm(const std::string formName, const std::string target);
};

#endif
