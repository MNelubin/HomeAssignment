/* Maxim Nelubin st132907@student.spbu.ru
	Assighment 2a
*/
#include <fstream>
#include <iostream>
#include <filesystem>

int main()
{
   
    std::ofstream outf;
    outf.open("test1.bin",std::ios::binary|std::ios::out);
    std::ifstream inf;
    inf.open("test1.bin",std::ios::binary|std::ios::in);
    int sz = std::filesystem::file_size("test1.bin");
    std::cout<<sz<<std::endl;
    char* buffer = new char [sz];
    //int buffer = 12345;
    inf.read(buffer,sizeof(buffer));
    
    for (int i = 0; i < sz; ++i)
    {
    	std::cout<<buffer[i];
    }
    std::cout<<std::endl;
    //outf.write((char*)&buffer,sizeof(buffer));

    inf.close();
    outf.close();
	std::cout<<buffer<<std::endl;

    delete [] buffer;
    return 0;
}