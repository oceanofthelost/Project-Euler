#include <iostream>
#include "BigInts.h"
#include <limits.h>
using namespace std;

int main()
{
    long i=0;
    long size = 0;
    BigInt fib;
    BigInt fib_old1=1;
    BigInt fib_old2;
    
    for(i=1;i<=1000000;i++)
    {
        fib=fib_old1+fib_old2;
        size=fib.size();
        //cout<<"term # "<<i<<"\t value: "<<fib<<"\t"<<"there size is: "<<size<<endl;
        cout<<"term # "<<i<<"\t there size is: "<<size <<endl;
        if(fib.size()>=1000)
        {
            cout<<endl<<i<<endl;
            break;   
        }
        
        fib_old1=fib_old2;
        fib_old2=fib;
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout<<endl;
    system("pause");   
}
