#include<iostream>
#include<ctime>
using namespace std;


extern "C" long Collatz(long);

int main()
{
    clock_t start,stop;
    long test = 0;
    long returned = 0;
    long max=0;
    long max_returned=0;

    start=clock();

    for(test=1;test<=1000000;test++)
    {
        returned=Collatz(test);
        
        if(returned>max_returned)
        {
            max_returned=returned;
            max=test;
        }
    }
    
    stop=clock();
    cout<<((stop-start)/(double)CLOCKS_PER_SEC)<<endl;
    cout<<max<<endl;
}
