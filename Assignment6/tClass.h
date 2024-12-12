/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 6
*/

#ifndef tClass_class
#define tClass_class

#include <vector>

template <typename Type>
class tClass
{
private:
    Type obj_temp;
    int num_temp;
    std::vector<float> vec_temp;

//num and vec from obj ,obj is class=> need to do get func
public:

    tClass (Type obj) : obj_temp(obj), num_temp(1), vec_temp(1, 1.0f) {}

    bool foo()
    {
        return obj_temp.bar(num_temp, vec_temp);
    }

    void set_vals(int num,std::vector<float> vec)
    {
        num_temp = num;
        vec_temp = vec;
    }


};

// Partial specialization for int
template <>
class tClass<int>
{
private:
    int obj_temp;
    int num_temp;
    std::vector<float> vec_temp;

public:
    tClass(int object);
    bool foo();
};

// Partial specialization for double
template <>
class tClass<double>
{
private:
    double obj_temp;
    int num_temp;
    std::vector<float> vec_temp;

public:
    tClass(double object);
    bool foo();
};

#endif