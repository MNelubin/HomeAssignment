/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 3
*/

#include "zAssig3.h"

int main()
{
    std::unique_ptr<Association> cool_gun1 =std::make_unique<Association>("RPG1");
    std::unique_ptr<Association> cool_gun2 =std::make_unique<Association>("RPG2");
    std::unique_ptr<Association> bad_gun =std::make_unique<Association>("minigun");
    std::unique_ptr<Association> n_bad_gun =std::make_unique<Association>("sniper_rifle");
    /*
    Association cool_gun("RPG");
    Association bad_gun("minigun");
    Association n_bad_gun("sniper_rifle");
    */
    Transformers zero(Transformers::Fraction::TRANSFORMER,"boss","general",10,180,std::move(cool_gun1));
    /* Learn about unique_ptr and use it */
    Optimus_Prime first(Transformers::Fraction::TRANSFORMER,"boss","general",10,180,std::move(cool_gun2),10,1);
    std::cout<<first.is_evil()<<std::endl;
    std::cout<<first.get_gun()<<std::endl;
    Megatron second(Transformers::Fraction::DECEPTICON,"true_evil","generalisimmus",2,900,std::move(bad_gun),5,0);
    std::cout<<second.is_evil()<<std::endl;
    std::cout<<second.get_gun()<<std::endl;
    Bamblbee third(Transformers::Fraction::TRANSFORMER,"Bamblbee","helper",8,700,std::move(n_bad_gun),50,1);
    std::cout<<third.is_evil()<<std::endl;
    std::cout<<third.get_gun()<<std::endl;
    std::cout<<third.get_gun()<<std::endl;
    std::cout<<third.get_gun()<<std::endl;
    std::cout<<third.r_invert(1)<<std::endl;
    std::cout<<first.doubeling_jokes()<<std::endl;
    std::cout<<first.get_info()<<std::endl;
    std::cout<<zero<<std::endl;
    std::cout<<first<<std::endl;
    std::cout<<second<<std::endl;
    std::cout<<third<<std::endl;
    std::cout<<(third==second)<<(third>second)<<(third<second)<<std::endl;
    return 0;
}
