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
    Optimus_Prime(Fraction,std::string,std::string,int,uint,std::unique_ptr<Association>,uint,bool);
    uint get_num_jokes()const ;
    void set_num_jokes(uint new_jokes);
    bool get_is_badge_on() const;
    void set_is_badge_on(bool badge);
    uint doubeling_jokes();
    std::string get_info_Optimus(const Optimus_Prime& Optimus_Prime) const
    {
        return Optimus_Prime.get_info()+", num_jokes:"+std::to_string(Optimus_Prime.get_num_jokes())+", is_badge_on:"+std::to_string(Optimus_Prime.get_is_badge_on());
    }
    friend std::ostream& operator<<(std::ostream& s,const Optimus_Prime& Optimus_Prime)
    {
        return s<< Optimus_Prime.get_info_Optimus(Optimus_Prime);
    }
};


#endif