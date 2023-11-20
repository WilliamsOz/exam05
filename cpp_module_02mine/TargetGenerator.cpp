#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void )
{
	return ;
}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget *>::iterator	it_begin = _target.begin();
	std::map<std::string, ATarget *>::iterator	it_end = _target.end();

	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->_target.clear();
	return ;
}


void	TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		_target.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
	return ;
}

void	TargetGenerator::forgetTargetType(std::string const &target)
{
	std::map<std::string, ATarget *>::iterator	it = _target.find(target);

	if (it != _target.end())
		delete it->second;
	_target.erase(target);
	return ;
}

ATarget*	TargetGenerator::createTarget(std::string const &target)
{
	std::map<std::string, ATarget *>::iterator	it = _target.find(target);
	if (it != _target.end())
		return _target[target];
	return NULL;
}