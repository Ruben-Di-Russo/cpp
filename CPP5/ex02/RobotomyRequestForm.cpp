#include "RobotomyRequestForm.hpp"

RRF::RRF(std::string target) : Form("Robotomy Request Form", 72, 45)
{
    this->target = target;
    std::cout << "Form has been created" << std::endl;
}

void RRF::execute(Bureaucrat const & executor) const
{
    if (executor.getgrade() > this->getgrade())
        throw Form::GradeTooLowException();
    else
    {
        std::cout << "Drilling noises" << std::endl;
        srand(time(0));
        if (rand() % 2 == 0)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->target << " robotomization failed" << std::endl;
    }
}

RRF::~RRF()
{
   return;
}