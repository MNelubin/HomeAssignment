/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#include "compozition.h"
#include "Transformers.h"



Transformers::Transformers(): Transformers(0,  "NULL","NULL",-1,0,nullptr)
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

Transformers::Transformers(bool good ,std::string clicku ,std::string job,int place  ,uint t_height  ,Association* s_gun ) :gun(s_gun)
	{
		is_decepticon = good;
		place_in_ranking = place;
		formal_name = clicku;
		profession=job;
		height.set_lenght(t_height);
	}

Transformers::~Transformers()
	{
	
	}

std::string Transformers::is_evil()
	{
		if (is_decepticon)
		{
			return "Decepticon";
		}
		else
		{
			return "Transformer";
		}
	}
void Transformers::set_fraction(bool frac)
	{
		is_decepticon=frac;
	}
int Transformers::get_place()
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
std::string Transformers::get_formal_name()
	{
		

		return formal_name;
	}
void Transformers::set_profession(std::string job)
	{
		profession = job;
	}
std::string Transformers::get_profession()
	{
		

		return profession;
	}
void Transformers::set_height(uint temp_height)
	{
		height.set_lenght(temp_height);
	}
uint Transformers::get_height()
	{
		

		return height.get_lenght();
	}
void Transformers::set_gun(Association* dif_gun)
	{
		gun=dif_gun;
	}
std::string Transformers::get_gun()
	{
	

		return (*gun).get_tgun();
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
	};
