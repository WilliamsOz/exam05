#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
	Fwoosh(/* args */);
	~Fwoosh();
	virtual ASpell *clone() const;
};

#endif