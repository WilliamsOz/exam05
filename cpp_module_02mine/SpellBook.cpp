#include "SpellBook.hpp"

SpellBook::SpellBook( void )
{
	return ;
}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it_begin = _book.begin();
	std::map<std::string, ASpell *>::iterator it_end = _book.end();

	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	_book.clear();
	return ;
}

void SpellBook::learnSpell(ASpell *spellToLearn)
{
	if (spellToLearn)
		_book.insert(std::pair<std::string, ASpell *>(spellToLearn->getName(), spellToLearn->clone()));
	return ;
}

void SpellBook::forgetSpell(std::string const &spellToForget)
{
	std::map<std::string, ASpell *>::iterator	it = _book.find(spellToForget);

	if (it != _book.end())
		delete it->second;
	_book.erase(spellToForget);
	return ;
}

ASpell* SpellBook::createSpell(std::string const &spellToCreate)
{
	std::map<std::string, ASpell *>::iterator	it = _book.find(spellToCreate);
	if (it != _book.end())
		return _book[spellToCreate];
	return NULL;
}