#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
	private :
		std::string _name;
		std::string _title;
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);
		Warlock();

	public :
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;

		void	setTitle(std::string const &newTitle);

		void	introduce() const;
};

#endif