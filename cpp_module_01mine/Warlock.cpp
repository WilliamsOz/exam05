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
	for (std::map<std::string, ASpell*>::iterator it = _spellBook.begin() ; it != _spellBook.end() ; it++)
		delete it->second;
	_spellBook.clear();
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

void	Warlock::learnSpell(ASpell *newspell)
{
	if (newspell)
		_spellBook.insert(std::pair<std::string, ASpell *>(newspell->getName(), newspell->clone()));
	return ;
}

void	Warlock::forgetSpell(std::string const spellToForget)
{
	std::map<std::string, ASpell *>::iterator it = _spellBook.find(spellToForget);

	if (it != _spellBook.end())
		delete it->second;
	_spellBook.erase(spellToForget);
	return ;
}

void	Warlock::launchSpell(std::string const spellToLaunch, ATarget const &target)
{
	ASpell* ptr_spellBook = _spellBook[spellToLaunch];

	if (ptr_spellBook)
		ptr_spellBook->launch(target);
	return ;
}

