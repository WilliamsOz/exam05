#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &type)
{
	this->_type = type;
	return ;
}

ATarget::ATarget(ATarget const &other)
{
	*this = other;
}

ATarget &ATarget::operator=(ATarget const &other)
{
	this->_type = other._type;
	return *this;
}

ATarget::~ATarget()
{
	return ;
}

std::string const &ATarget::getType() const
{
	return this->_type;
}

void ATarget::getHitBySpell(ASpell const &src) const
{
	std::cout << getType() << " has been " << src.getEffects() << std::endl;
	return;
}

