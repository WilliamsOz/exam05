#include "Warlock.hpp"
#include <iostream>

const std::string& Warlock::getName( void ) const {
	return this->_name;
}

const std::string& Warlock::getTitle( void ) const {
	return this->_title;
}

void	Warlock::setTitle(const std::string &newTitle) {
	this->_title = newTitle;
	return ;
}

void	Warlock::introduce( void ) const {
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << std::endl;
	return ;
}

Warlock::Warlock(std::string name, std::string title)
: _name(name), _title(title) {
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::~Warlock(){
	std::cout << this->_name << ": My job here is done!" << std::endl;
	return ;
}

int main(void)
{
	// Warlock bob;                            //Does not compile
	// Warlock bob("Bob", "the magnificent");  //Compiles
	// Warlock jim("Jim", "the nauseating");   //Compiles
	// bob = jim;                              //Does not compile
	// Warlock jack(jim);                      //Does not compile
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);

return 0;
}