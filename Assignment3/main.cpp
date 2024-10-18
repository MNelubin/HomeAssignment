/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "zAssig3.h"

int main()
{
	Association cool_gun("RPG");
	Association bad_gun("minigun");
    Optimus_Prime first(1,"boss","general",10,180,&cool_gun,10,1);
    std::cout<<first.is_evil()<<std::endl;
    std::cout<<first.get_gun()<<std::endl;
    Megatron second(1,"true_evil","generalisimmus",2,900,&bad_gun,5,0);
    
    return 0;
}