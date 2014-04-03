#include <iostream>
#include "BigInts.h"
#include <limits.h>
using namespace std;







int main()
{
    BigInt first = 1;
    int i = 0;
    int number = 0;
    long digit = 1;
    BigInt product = 1;
    
    for(i=2;first.size()<=1000100;i++)
    {
        first.add(i); 
        cout<<first.size()<<endl;  
    }
    
    number=first.size();
    for(i=0;i<7;i++)
    {
        
        product*=first[number-digit];
        digit*=10;
    }
    
    cout<<product<<endl;
    

    
    
    cout<<endl;
    system("pause");   
}

       
   

