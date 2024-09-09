#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);
	~Bureaucrat();

	std::string getName(void) const;
	int getGrade(void) const;
	void increaseGrade(void);
	void decreaseGrade(void);

	void signForm(AForm& form);
	void executeForm(AForm const & form);

	class GradeTooHighException;
	class GradeTooLowException;
};

class Bureaucrat::GradeTooHighException : public std::exception {
public:
	const char* what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception {
public:
	const char* what() const throw();
};

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& bureaucrat );

#endif
