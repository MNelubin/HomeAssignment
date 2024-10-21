/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_trans
#define ZAG_h_trans

#include <string>
#include "compozition.h"
#include "Association.h"

class Transformers
{
private:
	bool is_decepticon;
	int place_in_ranking;
	std::string formal_name, profession;
	compozition height;
	Association* gun;

public:

	Transformers();

	Transformers(bool good ,std::string clicku ,std::string job,int place  ,uint t_height  ,Association* s_gun );

	~Transformers();

	std::string is_evil();

	void set_fraction(bool frac);

	int get_place();
	
	void set_place(int place);
	
	void set_formal_name(std::string nickname);
	
	std::string get_formal_name();
	
	void set_profession(std::string job);
	
	std::string get_profession();

	void set_height(uint temp_height);

	uint get_height();

	void set_gun(Association* dif_gun);

	std::string get_gun();

	bool r_1();

	bool r_0();

	bool r_invert(bool y);

};


#endif