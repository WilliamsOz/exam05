#ifndef ASpell_HPP
# define ASpell_HPP

#include "Warlock.hpp"

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ~ASpell();
        ASpell(ASpell const &src);
        ASpell &operator=(ASpell const &src);
        std::string getName( void );
        std::string getEffects( void );

        virtual ASpell *clone() const = 0;
};

#endif