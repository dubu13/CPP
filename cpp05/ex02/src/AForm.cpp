#include "AForm.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute, const std::string target)
	: _target(target), _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	this->_isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	// std::cout << "AForm constructor called" << std::endl;
	std::cout << "AForm: " << this->_name << " created with grade to sign " << this->_gradeToSign << " and grade to execute " << this->_gradeToExecute << std::endl;
}

AForm::AForm(const AForm& other)
	: _target(other._target), _name(other._name), _gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute), _isSigned(other._isSigned)
{
	std::cout << "AForm copy constructor called." << std::endl;
}

AForm& AForm::operator=(const AForm& other){
    if (this != &other)
        this->_isSigned = other._isSigned;
    // std::cout << "AForm copy assignment operator called" << std::endl;
    return *this;
}

AForm::~AForm(){
	// std::cout << "AForm destructor called." << std::endl;
}

void AForm::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

bool AForm::getIsSigned() const{
	return this->_isSigned;
}

std::string AForm::getName() const{
	return this->_name;
}

int AForm::getGradeToSign() const{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const{
	return this->_gradeToExecute;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade too low";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "Form is not signed";
}

const char* AForm::GradeTooLowToExecuteException::what() const throw(){
	return "Grade too low to execute";
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
	os << "AForm: " << AForm.getName()
		<< ", is signed: " << AForm.getIsSigned()
		<< ", grade to sign: " << AForm.getGradeToSign()
		<< ", grade to execute: " << AForm.getGradeToExecute();
	return os;
}