/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "Decepticon.h"

Decepticon::Decepticon() : Transformers()
{

    drones_count=0;
    is_having_pocket_banana= 0;
}
Decepticon::Decepticon(Fraction good = Transformers::Fraction::TRANSFORMER,std::string clicku = "NULL",std::string job="NULL",
                   int place = -1,uint t_height = 1,
                   std::unique_ptr<Association> s_gun = std::make_unique<Association>("NULL"),uint i_drones_count = 0,bool i_is_banana_on = 0) :
    Transformers(good,clicku,job, place,t_height,std::move(s_gun) )
{

    drones_count=i_drones_count;
    is_having_pocket_banana=is_having_pocket_banana;
}
uint Decepticon::get_num_drones() const
{

    return drones_count;
}

void Decepticon::set_num_drones(uint new_drones)
{
    drones_count = new_drones;
}

bool Decepticon::get_is_banana_on() const
{

    return is_having_pocket_banana;
}

void Decepticon::set_is_banana_on(bool banana)
{
    is_having_pocket_banana = banana;
}
uint Decepticon::doubeling_drones()
{
    drones_count*=2;
    return drones_count;
}