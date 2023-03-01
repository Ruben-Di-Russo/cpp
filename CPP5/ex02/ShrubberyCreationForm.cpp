#include "ShrubberyCreationForm.hpp"

SCF::SCF(std::string target) : Form("Presidential Pardon Form", 145, 137)
{
    this->target = target;
    std::cout << "Form has been created" << std::endl;
}

void SCF::execute(Bureaucrat const & executor) const
{
    if (executor.getgrade() > this->getexe())
        throw Form::GradeTooLowException();
    else
    {
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }   
}

SCF::~SCF()
{
   return;
}