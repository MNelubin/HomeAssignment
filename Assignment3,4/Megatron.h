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
    Megatron(Fraction good,std::string clicku,std::string job,int place,uint t_height,std::unique_ptr<Association> s_gun,uint i_grenades_count,bool i_is_knife_on) ;
    uint get_num_grenades() const;
    void set_num_grenades(uint grenades);
    bool get_is_knife_on() const;
    void set_is_knife_on(bool knife_on);
    uint doubeling_grenades();
    std::string get_info_Megatron(const Megatron& Megatron) const
    {
        return Megatron.get_info()+", num_grenades:"+std::to_string(Megatron.get_num_grenades())+", is_having_pocket_knife:"+std::to_string(Megatron.get_is_knife_on());
    }
    friend std::ostream& operator<<(std::ostream& s,const Megatron& Megatron)
    {
        return s << Megatron.get_info_Megatron(Megatron);
    }
};

#endif