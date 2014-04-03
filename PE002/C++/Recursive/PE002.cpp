#include<cstdio>
#include<iostream>
#include<ctime>
using namespace std;

long Fibonacci(long); 
//fib 1 to 33
int main()
{
    clock_t start,stop;
    int i = 1;
    int returned = 0;
    int sum = 0;
   
    start=clock();
    for(i=0;i<=33;i++)
    {
        returned=Fibonacci(i);
        //cout<<returned<<endl;
        if(returned%2==0)
        {
            sum+=returned;
        }
    }
    stop=clock();
    cout<<((stop-start)/(double)CLOCKS_PER_SEC)<<endl;

    cout<<sum<<endl;
} 

long Fibonacci(long passed)
{
    if(passed==0)
    {
        return 0;
    }
    else if(passed==1)
    {
        return 1;
    }
    else return Fibonacci(passed-1)+Fibonacci(passed-2);
}
