#include "ASpell.hpp"

ASpell::ASpell( void )
{
	return ;
}

ASpell::ASpell(std::string const &name, std::string const &effect)
{
	this->_name = name;
	this->_effects = effect;
}

ASpell::ASpell(ASpell const &other)
{
	*this = other;
	return ;
}

ASpell &ASpell::operator=(ASpell const &other)
{
	this->_name = other._name;
	this->_effects = other._effects;
	return (*this);
}

ASpell::~ASpell()
{
	return ;
}

std::string const	&ASpell::getName( void ) const
{
	return this->_name;
}

std::string const	&ASpell::getEffects( void ) const
{
	return this->_effects;
}

void	ASpell::launch(ATarget const &src) const
{
	src.getHitBySpell((*this));
	return ;
}

