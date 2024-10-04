/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 2a
*/
#include "zAssig2a.h"

void problem_2a::DataOut(char* buffer)
{
    int s=sizeof( buffer);
    for (int i = 0; i < s; ++i)
    {
    	std::cout<<(buffer[i])<<" ";
    }
    std::cout<<std::endl;
    

}