/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_Autobot
#define ZAG_h_Autobot

#include "Transformers.h"

class Autobot:public Transformers
{
private:
    uint grenade_count;
    bool is_having_pocket_knife;
public:
    Autobot();
    Autobot(Fraction good,std::string clicku,std::string job,int place,uint t_height,std::unique_ptr<Association> s_gun,uint i_grenades_count,bool i_is_knife_on) ;
    uint get_num_grenades() const;
    void set_num_grenades(uint grenades);
    bool get_is_knife_on() const;
    void set_is_knife_on(bool knife_on);
    uint doubeling_grenades();
    std::string get_info_Autobot(const Autobot& Autobot) const
    {
        return Autobot.get_info()+", num_grenades:"+std::to_string(Autobot.get_num_grenades())+", is_having_pocket_knife:"+std::to_string(Autobot.get_is_knife_on());
    }
    friend std::ostream& operator<<(std::ostream& s,const Autobot& Autobot)
    {
        return s << Autobot.get_info_Autobot(Autobot);
    }

    virtual void transform() const{
        std::cout<<"Autobot ; transform"<<std::endl;
    }

    virtual void openFire() const{
        std::cout<<"Autobot ; openFire"<<std::endl;
    }

    virtual void ultimate() const{
        std::cout<<"Autobot ; ultimate"<<std::endl;
    }

};

#endif