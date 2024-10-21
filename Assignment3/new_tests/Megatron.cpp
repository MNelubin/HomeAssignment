/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "Megatron.h"

Megatron::Megatron() : Transformers()
	{
		
		grenade_count=0;
    	is_having_pocket_knife= 0;
	}
Megatron::Megatron(bool good = 1,std::string clicku = "NULL",std::string job="NULL",
	int place = -1 ,uint t_height = 1 ,
	Association* s_gun = nullptr,uint i_grenades_count = 0,bool i_is_knife_on = 0) : 
Transformers(good ,clicku ,job, place  ,t_height  ,s_gun )
	{
		
		grenade_count=i_grenades_count;
    	is_having_pocket_knife=is_having_pocket_knife;
	}
uint Megatron::get_num_grenades()
	{
		//std::cout<<grenade_count<<std::endl;
		return grenade_count;
	}

void Megatron::set_num_grenades(uint new_grenades)
	{
		grenade_count = new_grenades;
	}

bool Megatron::get_is_knife_on()
	{
		//std::cout<<is_having_pocket_knife<<std::endl;
		return is_having_pocket_knife;
	}

void Megatron::set_is_knife_on(bool knife)
	{
		is_having_pocket_knife = knife;
	}
uint Megatron::doubeling_grenades()
	{
		grenade_count*=2;
		return grenade_count;
	}