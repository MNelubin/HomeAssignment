/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_Decepticon
#define ZAG_h_Decepticon

#include "Transformers.h"

class Decepticon:public Transformers
{
private:
    uint drones_count;
    bool is_having_pocket_banana;
public:
    Decepticon();
    Decepticon(Fraction good,std::string clicku,std::string job,int place,uint t_height,std::unique_ptr<Association> s_gun,uint i_drones_count,bool i_is_banana_on);
    uint get_num_drones() const;
    void set_num_drones(uint drones);
    bool get_is_banana_on() const;
    void set_is_banana_on(bool banana_on);
    uint doubeling_drones();
    std::string get_info_Decepticon(const Decepticon& Decepticon) const
    {
        return Decepticon.get_info()+", num_drones:"+std::to_string(Decepticon.get_num_drones())+", is_having_banana:"+std::to_string(Decepticon.get_is_banana_on());
    }
    friend std::ostream& operator<<(std::ostream& s,const Decepticon& Decepticon)
    {
        return s << Decepticon.get_info_Decepticon(Decepticon);
    }

    virtual void transform() const{
        std::cout<<"Decepticon ; transform"<<std::endl;
    }

    virtual void openFire() const{
        std::cout<<"Decepticon ; openFire"<<std::endl;
    }

    virtual void ultimate() const{
        std::cout<<"Decepticon ; ultimate"<<std::endl;
    }

};

#endif