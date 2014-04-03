#include<cstdio>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    clock_t start,stop;
    int i=1;
    int j=0;
    int k=0;
    int temp=0;
    int sum=0;
    
    start=clock();
    for(k=0;k<33;k++)
    {
        //cout<<i<<endl;
        temp=i;
        if(i%2==0)
        {
            sum=sum+i;
        }
        i+=j;
        j=temp;
        
    }
    stop=clock();
    cout<<((stop-start)/(double)CLOCKS_PER_SEC)<<endl;

    cout<<sum<<endl;
} 
