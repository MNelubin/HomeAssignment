/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "Transformers.h"

int main()
{
	Association cool_gun("RPG");
    Transformers optimus(1,"boss","general",10,180,&cool_gun);
    optimus.is_evil();
    optimus.get_height();
    optimus.get_gun();
    return 0;
}