/* Maxim Nelubin st132907@student.spbu.ru
	Assighment 2a
*/
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>

int main()
{
    std::string Path="test1.pdf";
    std::ifstream inf;
    inf.open(Path,std::ios::binary|std::ios::in);
    int sz = std::filesystem::file_size(Path);
    std::cout<<sz<<std::endl;
    int* buffer = new int [sz];
    
    //int buffer = 12345;
    inf.read(&buffer,sz);
    
    for (int i = 0; i < sz; ++i)
    {
    	std::cout<<buffer[i];
    }
    std::cout<<std::endl;
    std::ofstream outf;
    

    outf.open(Path,std::ios::binary|std::ios::out);
    //int d=123;
    //outf.write((char*)(&d),sizeof(d));
    outf.write(&buffer,sz);
    inf.close();
    outf.close();
	std::cout<<buffer<<std::endl;

    delete [] buffer;
    return 0;
}