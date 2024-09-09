#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _is_signed;
	const int _grade_sign;
	const int _grade_exec;
	AForm(void);
public:
	AForm(std::string const name, int grade_sign, int grade_exec);
	AForm(const AForm& form);
	AForm& operator=(const AForm& form);
	virtual ~AForm();

	std::string getName() const;
	bool isSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;

	void beSigned(const Bureaucrat& burocreat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException;
	class GradeTooLowException;
	class FormNotSigned;

};

class AForm::GradeTooHighException : public std::exception {
public:
	const char* what() const throw();
};

class AForm::GradeTooLowException : public std::exception {
public:
	const char* what() const throw();
};

class AForm::FormNotSigned: public std::exception {
public:
	const char* what() const throw();
};

std::ostream&   operator<<( std::ostream& out, const AForm& form );


#endif
