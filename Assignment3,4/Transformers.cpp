/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#include "compozition.h"
#include "Transformers.h"



Transformers::Transformers(): Transformers(Fraction::TRANSFORMER,  "NULL","NULL",-1,0,std::make_unique<Association>("NULL"))
{
    /*
    is_decepticon = 0;
    place_in_ranking = -1;
    formal_name = "NULL";
    profession="NULL";
    height.set_lenght(0);
    Association p("NULL");
    gun = &p;
    */
}

Transformers::Transformers(Fraction good,std::string clicku,std::string job,int place,uint t_height,std::unique_ptr<Association> s_gun ) :gun(std::move(s_gun)),is_decepticon(good)
{
    place_in_ranking = place;
    formal_name = clicku;
    profession=job;
    height.set_lenght(t_height);
}

Transformers::~Transformers()
{

}

std::string Transformers::is_evil() const
{
    if (is_decepticon==Fraction::DECEPTICON)
    {
        return "Decepticon";
    }
    else if (is_decepticon == Fraction::TRANSFORMER)
    {
        return "Transformer";
    }
    else
    {
        return "Neutral";
    }
}
void Transformers::set_fraction(bool frac)
{
    if (frac)
    {
        is_decepticon = Fraction::TRANSFORMER;
    }
    else
    {
        is_decepticon = Fraction::DECEPTICON;
    }

}
int Transformers::get_place() const
{


    return place_in_ranking;
}
void Transformers::set_place(int place)
{
    place_in_ranking=place;
}
void Transformers::set_formal_name(std::string nickname)
{
    formal_name=nickname;
}
std::string Transformers::get_formal_name() const
{


    return formal_name;
}
void Transformers::set_profession(std::string job)
{
    profession = job;
}
std::string Transformers::get_profession() const
{


    return profession;
}
void Transformers::set_height(uint temp_height)
{
    height.set_lenght(temp_height);
}
uint Transformers::get_height() const
{


    return height.get_lenght();
}
void Transformers::set_gun(std::unique_ptr<Association> dif_gun)
{
    gun=std::move(dif_gun);
}
std::string Transformers::get_gun() const
{
    if (gun)
    {

        return (gun->get_tgun());
    }
    else
    {
        return "is nullptr";
    }
}
bool Transformers::r_1()
{
    return 1;
}
bool Transformers::r_0()
{
    return 0;
}
bool Transformers::r_invert(bool y)
{
    return !(y);
}
std::string Transformers::get_info() const
{
    std::string a= is_evil();
    std::string b =get_formal_name();
    std::string c =get_profession();
    std::string d =std::to_string(get_place());
    std::string e =std::to_string(get_height());
    std::string f =get_gun();

    return "Fraction:"+a+", Formal name:"+b+", Profession:"+c+
           ", Place:"+d+", Height:"+e+", Gun:"+f;
}
;
