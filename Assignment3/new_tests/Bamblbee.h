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
	Bamblbee(bool good ,std::string clicku ,std::string job,int place  ,uint t_height  ,Association* s_gun ,uint i_drones_count,bool i_is_banana_on);
	uint get_num_drones();
	void set_num_drones(uint drones);
	bool get_is_banana_on();
	void set_is_banana_on(bool banana_on);
	uint doubeling_drones();

};

#endif