#include <iostream>
#include "BigInts.h"
#include <limits.h>
using namespace std;

int main()
{
    long i = 0;
    long j = 0;
    BigInt multiplied=1;
    BigInt sum;
    
    for(i=1;i<=1000;i++)
    {
        multiplied=i;
        
        for(j=1;j!=i;j++)
        {
            multiplied*=i;
        }  
        sum+=multiplied;
        cout<<i<<endl;
    }
   
    
    cout<<"your solution is :"<<sum<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<endl;
    system("pause");   
}
