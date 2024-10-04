/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 2a
*/
#include "zAssig2a.h"

using namespace problem_2a;

int main()
{
    std::string Path1="test1.pdf";
    std::string Path2="test2.pdf";
    
    std::ifstream inf;
    inf.open(Path1,std::ios::binary|std::ios::in);

    int sz = std::filesystem::file_size(Path1);
    std::cout<<sz<<std::endl;

    char* buffer = new char [sz];

    inf.read(buffer,sz);
    
    DataOut(buffer);
    
    char* revbuffer= new char [sz];

    for (int i = 0; i < sz; ++i)
    {
    	revbuffer[i]=buffer[sz-i-1];
    }

    DataOut(revbuffer);

    std::ofstream outf;
    outf.open(Path2,std::ios::binary|std::ios::out);
    outf.write(revbuffer,sz);

    inf.close();
    outf.close();

    delete [] buffer;
    delete [] revbuffer;

    return 0;
}