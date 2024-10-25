/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_trans
#define ZAG_h_trans

#include <string>
#include <memory>
#include "compozition.h"
#include "Association.h"

class Transformers
{
public:
    enum class Fraction
    {
        DECEPTICON,
        TRANSFORMER
    };
private:
    Fraction is_decepticon;
    int place_in_ranking;
    std::string formal_name, profession;
    compozition height;
    std::unique_ptr<Association> gun;

public:
    // U can define small functions in header, beacuse they are inline by default

    Transformers();

    Transformers(Fraction good,std::string clicku,std::string job,int place,uint t_height,std::unique_ptr<Association> s_gun );
    // Use virtual when class can be inherited
    ~Transformers();

    std::string is_evil() const;

    void set_fraction(bool frac);

    int get_place() const;

    void set_place(int place);

    void set_formal_name(std::string nickname);

    std::string get_formal_name() const;

    void set_profession(std::string job);

    std::string get_profession() const;

    void set_height(uint temp_height);

    uint get_height() const;

    void set_gun(std::unique_ptr<Association> dif_gun);

    std::string get_gun() const;

    bool r_1();

    bool r_0();

    bool r_invert(bool y);

    std::string get_info() const;

    friend std::ostream& operator<<(std::ostream& s,const Transformers& trans)
    {
        return s<< trans.get_info();
    }
    bool operator<(const Transformers& trans) const
    {
        return place_in_ranking<trans.get_place();
    }
    bool operator>(const Transformers& trans) const
    {
        return trans<*this;
    }
    bool operator==(const Transformers& trans) const
    {
        return get_place()==trans.get_place();
    }

};


#endif