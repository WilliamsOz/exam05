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
	return ;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!"  << std::endl;
	return ;
}

void	Warlock::learnSpell(ASpell *newspell)
{
	_book.learnSpell(newspell);
	return ;
}

void	Warlock::forgetSpell(std::string const spellToForget)
{
	_book.forgetSpell(spellToForget);
	return ;
}

void	Warlock::launchSpell(std::string const spellToLaunch, ATarget const &target)
{
	ATarget const *test = 0;
	if (test == &target)
		return ;
	ASpell *tmp = _book.createSpell(spellToLaunch);
	if (tmp)
		tmp->launch(target);
	return ;
}