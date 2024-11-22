#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	// std::cout << "Bureaucrat constructor called." << std::endl;
	std::cout << "Bureaucrat " << this->_name << " created with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name){
	*this = other;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other){
	if (this != &other)
		this->_grade = other._grade;
	std::cout << "Bureaucrat assignation operator called." << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat(){
	// std::cout << "Bureaucrat destructor called." << std::endl;
}

std::string Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade() const{
	return this->_grade;
}

void Bureaucrat::incrementGrade(){
	try
	{
		if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade--;
		std::cout << "Bureaucrat " << this->_name << " grade incremented to " << this->_grade << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(){
	try
	{
		if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
		std::cout << "Bureaucrat " << this->_name << " grade decremented to " << this->_grade << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm& form){
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat " << this->getName() << " couldn't sign " << form.getName() << " because Bureaucrat " << e.what() << std::endl;
		return;
	}
	std::cout << "Bureaucrat " << this->getName() << " signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(AForm const & form){
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat " << this->getName() << " failed to execute " << form.getName() << " > Bureaucrat " << e.what() << std::endl;
		return;
	}
	std::cout << "Bureaucrat " << this->getName() << " executed " << form.getName() << std::endl;
	
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat){
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}