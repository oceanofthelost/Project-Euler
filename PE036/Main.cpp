#include <iostream>
#include <vector>
#include "BaseConversion.h"
using namespace std;

bool is_palindrome(unsigned long);
unsigned long rev_digits(unsigned long);
unsigned num_digits (unsigned long);


int main()
{
    unsigned long number = 0;
    BaseConversion binary_number = 0;
    BaseConversion rev_binary_number = 0;
    unsigned long total = 0;
    int i = 0;
    
    
    
    for(i=1;i<=1000000;i+=2)
    {
        if(is_palindrome(i))
        {
            binary_number=i;
            rev_binary_number=binary_number.reverse();
            if(binary_number==rev_binary_number)
            {
                total+=i;
                cout<<i<<"\t"<<binary_number<<endl;
            }   
        }
    }
    
   
    cout<<total<<endl; 
    system("pause");
    return 0;   
    
    
}

bool is_palindrome(unsigned long passed)
{
    unsigned long num_compare = 0;
    
    num_compare=rev_digits(passed);
    
    
    if(num_compare==passed)
    {
        return true;   
    }
    
    else if(num_compare!=passed)
    {
        return false;   
    }
}

unsigned long rev_digits(unsigned long passed)
{
    int number_digits=0;
    unsigned long number=passed;
    unsigned long rev=0;
    unsigned long mod=0;
    
    number_digits=num_digits(passed);
    
    for(number_digits;number_digits!=0;number_digits--)
    {
        int len_temp=number_digits; 
        int num_temp=1;     
                            
        mod=number%10;  
        number/=10;  
                    
        while(len_temp>1) 
        {                
            num_temp*=10;   
            len_temp--;
        }
        rev+=(mod*num_temp);  
    }                        
     return rev; 
}

unsigned num_digits ( unsigned long passed)
{
    int digits = 0;
    unsigned long number = passed;
    
    while(number > 0)
    {
        number/=10;
        digits++;   
    }   
    return digits;
}






















