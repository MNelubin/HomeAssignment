/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "zAssig3.h"

int main()
{
	Association cool_gun("RPG");
    Optimus_Prime first(1,"boss","general",10,180,&cool_gun,10,1);
    first.is_evil();
    first.get_gun();
    
    return 0;
}