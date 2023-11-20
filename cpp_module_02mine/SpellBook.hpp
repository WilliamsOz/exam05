#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
	private:
		std::map<std::string, ASpell *>	_book;

		SpellBook(SpellBook const &other);
		SpellBook &operator=(SpellBook const &other);


	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spellToLearn);
		void forgetSpell(std::string const &spellToForget);
		ASpell* createSpell(std::string const &spellToCreate);

};

#endif