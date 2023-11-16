#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!"  << std::endl;
	return ;
}

std::string const &Warlock::getName() const
{
	return (this->_name);
}

std::string const &Warlock::getTitle() const
{
	return (this->_title);
}

void Warlock::setTitle(std::string const &title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!"  << std::endl;
	return ;
}

void	learnSpell(ASpell *newspell)
{
	
}

void	forgetSpell(std::string const spell)
{

}

void	launchSpell(std::string const spell, ATarget const &target)
{

}

