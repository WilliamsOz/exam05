#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell
{
	private:
	std::string _name;
	std::string _effects;

	public:
	ASpell( void ); //constructeur par defaut
	ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &other); //constructeur par copie
	ASpell &operator=(ASpell const &other); //constructeur d'affectation
	virtual ~ASpell(); //destructeur

	std::string const	&getName( void ) const;
	std::string const	&getEffects( void ) const;

	void	launch(ATarget const &src) const;

	virtual ASpell *clone() const = 0;
};

#include "ATarget.hpp"

#endif