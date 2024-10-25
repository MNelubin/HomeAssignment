/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "Optimus_Prime.h"



Optimus_Prime::Optimus_Prime() : Transformers()
{

    jokes_stokepile=0;
    is_badge_on= 0;
}
Optimus_Prime::Optimus_Prime(Fraction good = Transformers::Fraction::TRANSFORMER,std::string clicku = "NULL",
                             std::string job="NULL",int place = -1,uint t_height = 1,
                             std::unique_ptr<Association> s_gun = std::make_unique<Association>("NULL"),uint i_jokes_stokepile = 0,bool i_is_badge_on = 0) :
    Transformers(good,clicku,job, place,t_height,std::move(s_gun) )
{

    jokes_stokepile=i_jokes_stokepile;
    is_badge_on= i_is_badge_on;
}
uint Optimus_Prime::get_num_jokes() const
{

    return jokes_stokepile;
}

void Optimus_Prime::set_num_jokes(uint new_jokes)
{
    jokes_stokepile=new_jokes;
}

bool Optimus_Prime::get_is_badge_on() const
{

    return is_badge_on;
}

void Optimus_Prime::set_is_badge_on(bool badge)
{
    is_badge_on=badge;
}
uint Optimus_Prime::doubeling_jokes()
{
    jokes_stokepile*=2;
    return jokes_stokepile;
}
