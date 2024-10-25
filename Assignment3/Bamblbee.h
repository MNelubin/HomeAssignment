/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_bamblbee
#define ZAG_h_bamblbee

#include "Transformers.h"

class Bamblbee:public Transformers
{
private:
    uint drones_count;
    bool is_having_pocket_banana;
public:
    Bamblbee();
    Bamblbee(Fraction good,std::string clicku,std::string job,int place,uint t_height,std::unique_ptr<Association> s_gun,uint i_drones_count,bool i_is_banana_on);
    uint get_num_drones() const;
    void set_num_drones(uint drones);
    bool get_is_banana_on() const;
    void set_is_banana_on(bool banana_on);
    uint doubeling_drones();
    std::string get_info_Bamblbee(const Bamblbee& Bamblbee) const
    {
        return Bamblbee.get_info()+", num_drones:"+std::to_string(Bamblbee.get_num_drones())+", is_having_banana:"+std::to_string(Bamblbee.get_is_banana_on());
    }
    friend std::ostream& operator<<(std::ostream& s,const Bamblbee& Bamblbee)
    {
        return s << Bamblbee.get_info_Bamblbee(Bamblbee);
    }
};

#endif