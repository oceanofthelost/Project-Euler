#include <iostream>
#include "BigInts.h"
#include <limits.h>
using namespace std;

int main()
{
    long a = 0;
    long b = 0;
    long digits = 0;
    long max = 0;
    long number = 0;
    BigInt multiplied=1;
    BigInt largest;
  
    for(a=1;a<100;a++)
    {
        multiplied=a;
        
        for(b=1;b<=a;b++)
        {
            multiplied*=a;
            digits=multiplied.sum();
            
            if(max<digits)
            {
                max=digits;
                largest=multiplied;
                number=a;
                //cout<<largest<<"  "<<max<<"  "<<a<<"  "<<b<<endl;
            }
        } 
    } 
    
    cout<<largest<<"  "<<max<<"  "<<number<<endl;
    
    
    
    
    
    
    
    
    
    
    cout<<endl;
    system("pause");   
}

       
   

