/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 6
*/

#include "tClass.h"



tClass<int>::tClass (int obj) : obj_temp(obj), num_temp(obj), vec_temp(1, 1.0f) {}


tClass<double>::tClass (double obj) : obj_temp(obj), num_temp(obj), vec_temp(1, 1.0f) {}


bool tClass<int>::foo()
{
    return true;
}

bool tClass<double>::foo()
{
    return false;
}
