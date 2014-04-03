#include <iostream>
#include "BigInts.h"
#include <limits.h>
using namespace std;







int main()
{
    long factors[10];
    long i=0;
    long j=0;
    long k=0;
    long number=0;
    long counter=0;
    long sum=0;
    BigInt factorial;
    long total=0;
    for(i=0;i!=10;i++)
    {
        number=1;
        for(j=i;j!=0;j--)
        {
            number*=j;
        }
        factors[counter]=number;
        counter+=1;
    }
    
    for(i=3;i<=1000000;i++)
    {
        factorial=i;
        sum=0;
        cout<<i<<endl;
        
        for(j=0;j<factorial.size();j++)
        {
            sum+=factors[factorial.digit_to_long(j)];  
        }
        if(sum==i)
        {
            total+=sum;   
        }  
    }
    
    
    
    
    cout<<endl<<total<<endl;
    
    
    
    
    
    
    
    
    
    
    cout<<endl;
    system("pause");   
}

       
   

