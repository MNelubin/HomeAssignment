/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_trans
#define ZAG_h_trans

#include "inc.h"
#include "compozition.h"

class Transformers
{
private:
	bool is_decepticon;
	int place_in_ranking;
	std::string formal_name, profession;
	compozition height;	
public:
	Transformers(bool,std::string,std::string,int,uint);

	~Transformers();

	bool is_evil();

	void set_fraction(bool frac);

	int get_place();
	
	void set_place(int place);
	
	void set_formal_name(std::string nickname);
	
	std::string get_formal_name();
	
	void set_profession(std::string job);
	
	std::string get_profession();

	void set_height(uint temp_height);

	uint get_height();

};


#endif