/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 2b
*/
#include "zAssig2b.h"



double problem_2b::solver()
{
    std::string polish = problem_2b::r_polish();
    double* s_calc = new double [polish.length()];
    int c_i= -1;
    memset(s_calc,0,sizeof(s_calc));
    std::map<char, int> operands;
    
    operands[')']=1;
    operands['+']=2;
    operands['-']=2;
    operands['*']=3;
    operands['/']=3;
    operands['^']=4;

    std::string temp_for_double;
    for (int ptr = 0;ptr<polish.length();++ptr)
    {
    	for (int i = 0; i < polish.length(); ++i)
    	{

    		//std::cout<<s_calc[i];
    	}
    	//std::cout<<std::endl;
        if (polish[ptr]==' ')
        {
        	if (temp_for_double.length()!=0)
        	{
        		c_i+=1;
        		//std::cout<<"'"<<temp_for_double<<"'"<<std::endl;
        		s_calc[c_i] = std::stod(temp_for_double);
        		temp_for_double="";
        	}
        }


        char op=polish[ptr];
        //std::cout<<op<<std::endl;
    	if (operands[op]!=0)
    	{
    		if (op=='+')
    		{
    			double n1=s_calc[c_i];
    			c_i-=1;
    			double n2=s_calc[c_i];
    			s_calc[c_i]=n1+n2;
    		}

    		if (op=='*')
    		{
    			double n1=s_calc[c_i];
    			c_i-=1;
    			double n2=s_calc[c_i];
    			s_calc[c_i]=n1*n2;
    		}

    		if (op=='/')
    		{
    			double n1=s_calc[c_i];
    			c_i-=1;
    			double n2=s_calc[c_i];
    			s_calc[c_i]=n2/n1;
    		}

    		if (op=='-')
    		{
    			double n1=s_calc[c_i];
    			c_i-=1;
    			double n2=s_calc[c_i];
    			s_calc[c_i]=n2-n1;
    		}
    	}
    	else
    	{
    		if (op!=' ')
    		{
    			temp_for_double+=op;
    		}
    		
    	}
    }




    //std::cout<<s_calc[0]<<std::endl;
    double answer = s_calc[c_i];


    delete s_calc;
    return answer;
}