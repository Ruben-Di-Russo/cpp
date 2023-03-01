#include "PresidentialPardonForm.hpp"

PPF::PPF(std::string target) : Form("Presidential Pardon Form", 25, 5)
{
    this->target = target;
    std::cout << "Form has been created" << std::endl;
}

void PPF::execute(Bureaucrat const & executor) const
{
    if (executor.getgrade() > this->getexe())
        throw Form::GradeTooLowException();
    else
    {
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }   
}

PPF::~PPF()
{
   return;
}