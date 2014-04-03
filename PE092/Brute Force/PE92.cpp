#include<iostream>
using namespace std;

long chain(long);
int main()
{
    long i=0;
    unsigned long number;
    unsigned long total=0;
    
    
   for(i=1;i<10000000;i++)
    {
        number=i;
        
        while(number!=1 && number!=89)
        {
            number=chain(number);    
        }
        if(number==89)
        {
            total++;
        }
    }

    cout<<total<<endl;
}

long chain(long passed)
{
    long sum = 0;

    while(passed>0)
    {
        sum=sum+(passed%10)*(passed%10);
        passed=passed/10;
    }
    return sum;
}
