#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>

class Warlock
{
	private:
	std::string	_name;
	std::string	_title;

	Warlock( void ); //constructeur par defaut
	Warlock( const Warlock & ); // constructeur par copie
	Warlock &operator=( const Warlock & ); // constructeur d'affectation

	public:
	const std::string& getName( void ) const;
	const std::string& getTitle( void ) const;
	void	setTitle(const std::string &newTitle);
	void	introduce( void ) const;
	Warlock(std::string name, std::string title);
	~Warlock(); // destructeur
};

#endif