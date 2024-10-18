/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_optimus
#define ZAG_h_optimus

#include "Transformers.h"


class Optimus_Prime:public Transformers
{
private:
    uint jokes_stokepile;
    bool is_badge_on;
public:
	Optimus_Prime();
	Optimus_Prime(bool,std::string,std::string,int,uint,Association*,uint,bool);
	uint get_num_jokes();
	void set_num_jokes(uint new_jokes);
	bool get_is_badge_on();
	void set_is_badge_on(bool badge);
	uint doubeling_jokes();

};


#endif