#include "Bureaucrat.hpp"

int main(void)
{
    try {
        //const Bureaucrat* meta = new Bureaucrat("boh", 300);
        Bureaucrat *meta = new Bureaucrat("ruben", 100);
        Bureaucrat test1("simo", 100);
        test1.decrement();
        meta->increment();
        std::cout<<"Test increment " << test1.getname() << " grade " << test1.getgrade() << std::endl;
        std::cout<<"Test increment " << meta->getname() <<  " grade " << meta->getgrade() << std::endl;
        
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout<<e.what()<<std::endl;
    }
    try {
        const Bureaucrat* meta = new Bureaucrat("boh", 0);
        std::cout<<"test"<<std::endl;
        delete meta;
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout<<e.what()<<std::endl;
    }


    return(0);
}