/* Maxim Nelyubin st132907@student.spbu.ru
	Assighment 2b
*/
#include "zAssig2b.h"

std::string problem_2b::r_polish()
{
    std::map<char, int> operands;
    
    operands[')']=1;
    operands['+']=2;
    operands['-']=2;
    operands['*']=3;
    operands['/']=3;
    operands['^']=4;
    ///std::cout<<operands['1']<<std::endl;"""

    std::string eval;
    std::string reverse_poland_string;
    std::getline(std::cin,eval);
    char* s_oper = new char [eval.length()];
    
    int o_i= -1;
    
    //std::cout<<eval.length()<<std::endl;
    //std::cout<<sizeof()<< std::endl;
    for (int g = 0; g < eval.length(); ++g)
    {
        //std::cout<< s_oper[o_i]<< "  "<< s_oper<<"  "<<o_i<<"  "<<eval[g]<<std::endl;
        //std::cout<<eval[g]<<std::endl;
        if (eval[g]=='(')
        {
            o_i+=1;
            s_oper[o_i]=eval[g];
        }
        if ((47< (int) eval[g] && (int) eval[g]<58 )|| eval[g]=='.')
        {
            reverse_poland_string+=eval[g];
            if ( !(eval[g+1]=='.') && !(eval[g]=='.') &&((g+1)!=eval.length()) && !(47< (int) eval[g+1] && (int) eval[g+1]<58))
            {
                reverse_poland_string+=" ";
            }

        }
        //std::cout<<o_i;
        if (operands[eval[g]]!=0)
        {
            if (o_i+1)
            {
            	
                if (operands[eval[g]]<operands[s_oper[o_i]] )
                {
                	
                	while ((o_i> -1) && (s_oper[o_i]!='('))
                	{
                	    reverse_poland_string+=" ";
                        reverse_poland_string+=s_oper[o_i];
                        reverse_poland_string+=" ";
                        
                	    //std::cout<<o_i;
                	    o_i-=1;
                	}
                	
                    o_i+=1;
                    s_oper[o_i]=eval[g];
                    
                }




                else if (operands[eval[g]]==operands[s_oper[o_i]] )
                {
                	reverse_poland_string+=" ";
                    reverse_poland_string+=s_oper[o_i];
                    reverse_poland_string+=" ";
                   

                    s_oper[o_i]=eval[g];
                }






                else
                {
                    o_i+=1;
                    s_oper[o_i]=eval[g];
                }
                if (eval[g]==')' )
                {
                	o_i-=1;
                }
                if (s_oper[o_i]=='(')
                {
                	o_i-=1;
                }
            }
            else
            {
                o_i+=1;
                s_oper[o_i]=eval[g];
            }

        }

    }
    //std::cout<<o_i<<std::endl;
    while ((o_i> -1))
    {
        reverse_poland_string+=" ";
    	reverse_poland_string+=s_oper[o_i];
        reverse_poland_string+=" ";
        
    	//std::cout<<o_i;
    	o_i-=1;
    }


    //std::cout<<(int) '0'<<"  "<< (int) '9'<<std::endl;
    //for (int i = 0; i < eval.length(); ++i)
    //{
    //	std::cout<<s_oper[i]<<std::endl;
    //}
    std::cout<<reverse_poland_string<<std::endl;
    
    delete s_oper;

    

	return reverse_poland_string;
}
