/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "Bamblbee.h"

Bamblbee::Bamblbee() : Transformers()
	{
		
		drones_count=0;
    	is_having_pocket_banana= 0;
	}
Bamblbee::Bamblbee(bool good = 0,std::string clicku = "NULL",std::string job="NULL",
	int place = -1 ,uint t_height = 1 ,
	Association* s_gun = nullptr,uint i_drones_count = 0,bool i_is_banana_on = 0) : 
Transformers(good ,clicku ,job, place  ,t_height  ,s_gun )
	{
		
		drones_count=i_drones_count;
    	is_having_pocket_banana=is_having_pocket_banana;
	}
uint Bamblbee::get_num_drones()
	{
		
		return drones_count;
	}

void Bamblbee::set_num_drones(uint new_drones)
	{
		drones_count = new_drones;
	}

bool Bamblbee::get_is_banana_on()
	{
		
		return is_having_pocket_banana;
	}

void Bamblbee::set_is_banana_on(bool banana)
	{
		is_having_pocket_banana = banana;
	}
uint Bamblbee::doubeling_drones()
	{
		drones_count*=2;
		return drones_count;
	}