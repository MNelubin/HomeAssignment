/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "zAssig3.h"

int main()
{
	Association cool_gun("RPG");
	Association bad_gun("minigun");
	Association n_bad_gun("sniper_rifle");
    Optimus_Prime first(0,"boss","general",10,180,&cool_gun,10,1);
    std::cout<<first.is_evil()<<std::endl;
    std::cout<<first.get_gun()<<std::endl;
    Megatron second(1,"true_evil","generalisimmus",2,900,&bad_gun,5,0);
    std::cout<<second.is_evil()<<std::endl;
    std::cout<<second.get_gun()<<std::endl;
    Bamblbee third(0,"Bamblbee","helper",2,700,&n_bad_gun,50,1);
    std::cout<<third.is_evil()<<std::endl;
    std::cout<<third.get_gun()<<std::endl;

    return 0;
}