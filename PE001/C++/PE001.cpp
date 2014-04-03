#include<cstdio>
#include<ctime>
#include<iostream>
using namespace std;

int main()
{

    int i=0;
    int sum=0;
    clock_t start,end;
    
    start=clock();
    for(i=0;i<1000;i++)
    {
        if(i%5==0 || i%3==0)
        {
            sum+=i;
        }
        
    }

    end=clock();
    cout<<((double)end-start/CLOCKS_PER_SEC)<<endl;
    cout<<sum<<endl;
}
