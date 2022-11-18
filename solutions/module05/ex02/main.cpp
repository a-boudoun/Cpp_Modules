#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	try
	{
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 2);
		PresidentialPardonForm f1("f1");
		RobotomyRequestForm f2("f2");
		ShrubberyCreationForm f3("f3");
		ShrubberyCreationForm f4("f4");
		std::cout << "-------------Signing----------" << std::endl;
		f1.beSigned(b1);
		f2.beSigned(b1);
		f3.beSigned(b1);
		f4.beSigned(b1);
		std::cout << "------------b1-------------" << std::endl;
		std::cout << b1 << std::endl;
		f1.execute(b1);
		f2.execute(b1);
		f3.execute(b1);
		std::cout << "------------b2-------------" << std::endl;
		std::cout << b2 << std::endl;
		f1.execute(b2);
		f2.execute(b2);
		f4.execute(b2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
