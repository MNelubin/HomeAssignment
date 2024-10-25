/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_compoz
#define ZAG_h_compoz

#include <iostream>
//for uint



class compozition
{
private:
    uint lenght;
public:
    compozition();
    compozition(uint);
    ~compozition();
    uint get_lenght() const;
    void set_lenght(uint i_lenght);
};


#endif