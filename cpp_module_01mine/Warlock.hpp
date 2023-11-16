#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock
{
	private:
	std::string	_name;
	std::string	_title;
	std::map<std::string, ASpell *>	_spellBook;

	Warlock( void ); //constructeur par defaut
	Warlock( Warlock const &other ); // constructeur par copie
	Warlock &operator=( Warlock const &other ); // constructeur d'affectation

	public:
	const std::string& getName( void ) const;
	const std::string& getTitle( void ) const;
	void	setTitle(const std::string &newTitle);
	void	introduce( void ) const;
	Warlock(std::string const &name, std::string const &title);
	~Warlock(); // destructeur

	void	learnSpell(ASpell *newspell);

	void	forgetSpell(std::string const spell);

	void	launchSpell(std::string const spell, ATarget const &target);
};

#endif