#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>

class Warlock
{
	private:
	std::string	_name;
	std::string	_title;

	SpellBook	_book;

	Warlock( void ); //constructeur par defaut
	Warlock( Warlock const &other ); // constructeur par copie
	Warlock &operator=( Warlock const &other ); // constructeur d'affectation

	public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock(); // destructeur

	std::string const &getName( void ) const;
	std::string const &getTitle( void ) const;

	void	setTitle(std::string const &newTitle);

	void	introduce( void ) const;

	void	learnSpell(ASpell *newspell);

	void	forgetSpell(std::string const spell);

	void	launchSpell(std::string const spell, ATarget const &target);
};

#endif