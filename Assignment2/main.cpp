/* Maxim Nelubin st132907@student.spbu.ru
	Assighment 2a
*/
#include <fstream>
#include <iostream>
#include <filesystem>

int main()
{
    int *d;
    std::ofstream inf;
    inf.open("test1.bin",std::ios::binary|std::ios::in);
    std::ifstream outf;
    outf.open("test1.bin",std::ios::binary|std::ios::out);
    int sz = std::filesystem::file_size("test1.bin");
    std::cout<<sz<<std::endl;
    char* buffer = new char [sz];
    
    outf.read((char*)&buffer,sizeof(buffer));
    
    for (int i = 0; i < sz; ++i)
    {
    	std::cout<<buffer[i];
    }
    std::cout<<std::endl;
    //inf.write((char*)&buffer,sizeof(buffer));

    inf.close();
    outf.close();
	std::cout<<buffer<<std::endl;

    delete [] d;
    return 0;
}