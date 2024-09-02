#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _is_signed;
	const int _grade_sign;
	const int _grade_exec;
public:
	Form(void);
	Form(std::string const name, int grade_sign, int grade_exec);
	Form(const Form& form);
	Form& operator=(const Form& form);
	~Form();

	std::string getName() const;
	bool isSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void beSigned(const Bureaucrat& burocreat);

	class GradeTooHighException;
	class GradeTooLowException;

};

class Form::GradeTooHighException : public std::exception {
public:
	const char* what() const throw();
};

class Form::GradeTooLowException : public std::exception {
public:
	const char* what() const throw();
};

std::ostream&   operator<<( std::ostream& out, const Form& form );


#endif
