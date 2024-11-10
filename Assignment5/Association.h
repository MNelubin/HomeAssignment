/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_Assoc
#define ZAG_h_Assoc

#include <string>

class Association
{
private:
    std::string type_gun;
public:
    Association();
    Association(std::string);
    ~Association();
    std::string get_tgun() const;
    void set_tgun(std::string);
};


#endif
