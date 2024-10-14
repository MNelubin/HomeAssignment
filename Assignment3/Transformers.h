/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/
#ifndef ZAG_h_trans
#define ZAG_h_trans



class Transformers
{
private:
	bool is_decepticon;
	int place_in_ranking;
	std::string formal_name, profession;	
public:
	Transformers(bool,std::string,std::string,int);

	~Transformers();

	void is_evil();

	void set_fraction(bool frac);

	void get_place();
	
	void set_place(int place);
	
	void set_formal_name(std::string nickname);
	
	void get_formal_name();
	
	void set_profession(std::string job);
	
	void get_profession();

};


#endif