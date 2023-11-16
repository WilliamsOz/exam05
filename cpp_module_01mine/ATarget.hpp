#ifndef ATARGET_HPP
# define ATARGET_HPP

#include "Warlock.hpp"
#include <iostream>

class ASpell;

class ATarget
{
	private:
		std::string	_type;

	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &other);
		ATarget &operator=(ATarget const &other);
		virtual ~ATarget();

		std::string const	&getType() const;

		void	getHitBySpell(ASpell const &src) const;

		virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"

#endif