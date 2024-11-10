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
    
    Transformers zero(Transformers::Fraction::TRANSFORMER,"boss","general",10,180,std::move(cool_gun1));
    
    Decepticon second(Transformers::Fraction::DECEPTICON,"true_evil","generalisimmus",2,900,std::move(bad_gun),5,0);
    
    std::cout<<second.is_evil()<<std::endl;
    std::cout<<second.get_gun()<<std::endl;

    Autobot third(Transformers::Fraction::TRANSFORMER,"Autobot","helper",8,700,std::move(n_bad_gun),50,1);

    std::cout<<third.is_evil()<<std::endl;
    std::cout<<third.get_gun()<<std::endl;
    std::cout<<third.get_gun()<<std::endl;
    std::cout<<third.get_gun()<<std::endl;
    std::cout<<third.r_invert(1)<<std::endl;

    zero.transform();
    second.transform();
    third.transform();
    zero.openFire();
    second.openFire();
    third.openFire();
    zero.ultimate();
    second.ultimate();
    third.ultimate();

    Transformers* t1 = new Autobot(Transformers::Fraction::TRANSFORMER,"Autobot","helper",8,700,std::move(cool_gun2),50,1);

    std::cout<< "an ancetors-typed pointer:"<<std::endl;
    t1->transform();
    t1->openFire();
    t1->ultimate();
    
    std::vector <Transformers*> objects;

    
    for (int i = 0; i < 3; ++i) {
        objects.push_back(new Transformers());
        objects.push_back(new Autobot());
        objects.push_back(new Decepticon());
    }
    std::cout<<"!!vector of pointers!!"<<std::endl;
    for (const auto& obj : objects) {
        obj->transform();
        obj->openFire();
        obj->ultimate();
    }

    for (auto& obj : objects) {
        delete obj;
    }

    

    std::cout<<(third==second)<<(third>second)<<(third<second)<<std::endl;

    
    return 0;
}
