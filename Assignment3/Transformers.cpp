/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#include "compozition.h"
#include "Transformers.h"




Transformers::Transformers(bool good = 0,std::string clicku = "",std::string job="",int place = -1 ,uint t_height = 1 )
	{
		is_decepticon = good;
		place_in_ranking = place;
		formal_name = clicku;
		profession=job;
		height.set_lenght(t_height);

	}

Transformers::~Transformers()
{
	std::cout<<"Tr_Destructed"<<std::endl;
}


bool Transformers::is_evil()
	{
		if (is_decepticon)
		{
			std::cout<< "evil"<< std::endl;

			return 0;
		}
		else
		{
			std::cout<< "good"<< std::endl;

			return 1;
		}
	}
void Transformers::set_fraction(bool frac)
	{
		is_decepticon=frac;
	}
int Transformers::get_place()
	{
		std::cout<<place_in_ranking<<std::endl;

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
		std::cout<<formal_name<<std::endl;

		return formal_name;
	}
void Transformers::set_profession(std::string job)
	{
		profession = job;
	}
std::string Transformers::get_profession()
	{
		std::cout<<profession<<std::endl;

		return profession;
	}
void Transformers::set_height(uint temp_height)
	{
		height.set_lenght(temp_height);
	}
uint Transformers::get_height()
	{
		std::cout<<height.get_lenght()<<std::endl;

		return height.get_lenght();
	};
