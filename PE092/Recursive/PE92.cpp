#include<iostream>
#include<ctime>
using namespace std;

unsigned long chain(unsigned long);

int main()
{
    clock_t start, stop;
    unsigned long i=0;
    unsigned long temp;
    unsigned long numchain=0;

    start=clock();
    for(i=1;i<10000000;i++)
    {
        temp=chain(i);
        
        if(temp==89)
        {
            numchain+=1;    
        }
    }
    stop=clock();
    cout<<((stop-start)/(double)CLOCKS_PER_SEC);
    cout<<numchain<<endl;
}

unsigned long chain(unsigned long passed)
{
    unsigned long temp=0;
    unsigned long total=0;
   
    if(passed==1)
    {
        return 1;
    }
    else if(passed==89)
    {
        return 89;
    }
    else
    {
        while(passed>0)
        {
            temp=(passed%10)*(passed%10);
            passed=passed/10;
            total=total+temp;
        }
        return chain(total);
    }


}
