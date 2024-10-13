/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
//#include "Transformers.h"
#include <iostream>
#include <string>

class Transformers
{
private:
	bool is_decepticon;
	int place_in_ranking;
	std::string formal_name, profession;

public:
	Transformers(bool good = 0,std::string clicku = "",std::string job="",int place = -1 )
	{
		is_decepticon = good;
		place_in_ranking = place;
		formal_name = clicku;
		profession=job;

		//set_all(is_decepticon,place_in_ranking,formal_name,profession);
	}
	/*
	void set_all(bool fraction,
	int place_in_ranking ,
	std::string formal_name,
	std::string profession)
	{
		is_decepticon = is_decepticon;
		place_in_ranking = place_in_ranking;
		formal_name = formal_name;
		profession = profession;

	}
	*/
	void Transformers::is_evil()
	{
		if (is_decepticon)
		{
			std::cout<< "evil"<< std::endl;
		}
		else
		{
			std::cout<< "good"<< std::endl;
		}
	}
	void Transformers::set_fraction(bool frac)
	{
		is_decepticon=frac;
	}
	void Transformers::get_place()
	{
		std::cout<<place_in_ranking<<std::endl;
	}
	void Transformers::set_place(int place)
	{
		place_in_ranking=place;
	}
	void Transformers::set_formal_name(std::string nickname)
	{
		formal_name=nickname;
	}
	void Transformers::get_formal_name()
	{
		std::cout<<formal_name<<std::endl;
	}
	void Transformers::set_profession(std::string job)
	{
		profession = job;
	}
	void Transformers::get_profession()
	{
		std::cout<<profession<<std::endl;
	}
};

int main()
{
	int place_in_ranking=10;
	std::string x = "123";
	std::string y="dig";
	Transformers Optimus(1,x,"dig",10);
	Optimus.is_evil();
	Optimus.get_place();
}