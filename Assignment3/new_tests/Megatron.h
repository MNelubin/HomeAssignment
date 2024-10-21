/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_megarton
#define ZAG_h_megatron

#include "Transformers.h"

class Megatron:public Transformers
{
private:
    uint grenade_count;
    bool is_having_pocket_knife;
public:
	Megatron();
	Megatron(bool good ,std::string clicku ,std::string job,int place  ,uint t_height  ,Association* s_gun ,uint i_grenades_count,bool i_is_knife_on) ;
	uint get_num_grenades();
	void set_num_grenades(uint grenades);
	bool get_is_knife_on();
	void set_is_knife_on(bool knife_on);
	uint doubeling_grenades();

};

#endif