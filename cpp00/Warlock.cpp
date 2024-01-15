#include "Warlock.hpp"

Warlock::~Warlock( void )
{
    std::cout << _name << ": My job here is done!" << std::endl;
    return ;
}

Warlock::Warlock(std::string name, std::string title)
: _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
	return ;
}

std::string const & Warlock::getName( void ) const
{
	return this->_name;
}

std::string const & Warlock::getTitle( void ) const
{
	return this->_title;
}

void	Warlock::setTitle(std::string const &newTitle)
{
	this->_title = newTitle;
	return ;
}

void	Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
    return ;
}
