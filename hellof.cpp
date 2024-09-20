/* Maxim Nelubin st132907@student.spbu.ru
	first project
*/
#include "zag.h"



void problem_1::hello()
{
	std::string f;
	std::cout<<"Hello, world!"<<std::endl;
	while (f != "get_out")
	{
		std::cin>>f;
		std::cout<<"Hello, "<<f<<"!"<<std::endl;
	}

}
