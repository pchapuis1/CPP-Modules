#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", "target", 145, 137){
//	std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs): AForm(rhs){
	// *this = rhs;
//	std::cout << "ShrubberyCreationForm: Copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):  AForm("ShrubberyCreationForm", target, 145, 137){
//	std::cout << "ShrubberyCreationForm: setup constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
//	std::cout << "ShrubberyCreationForm: Destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
	if (this != &rhs) {
		*this = rhs;	
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::ofstream	outFile;
	std::string		fileName;

	if (this->getSign()){
		if (this->getGradeExec() >= executor.getGrade()){
			fileName = this->getTarget() + "_shrubbery";
			outFile.open(fileName.c_str(), std::ios::app);
			if (!outFile.is_open()){
				std::cerr << "Unable to create or open the output file." << std::endl;
     		   outFile.close();
    		    return ;
			}
			outFile <<"        _-_"<< std::endl << "    /~~   ~~\\"<< std::endl <<" /~~         ~~\\"<< std::endl<<"{               }"<< std::endl<<" \\  _-     -_  /"<< std::endl<<"   ~  \\\\ //  ~"<< std::endl<<"_- -   | | _- _"<< std::endl<<"  _ -  | |   -_"<< std::endl<<"      // \\\\"<< std::endl;
			outFile.close();
			if (outFile.fail()){
				std::cerr << "Error while closing the output file." << std::endl;
				return ;
			}
		}
		else	
			throw GradeTooLowException();
	}
	else
		throw NotSign();
}