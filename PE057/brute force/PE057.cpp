#include<iostream>
#include "BigInts.h"
#include<ctime>
using namespace std;

long total=0;


int main()
{
    clock_t start,stop;
    BigInt p_old=1;
    BigInt q_old=1;
    BigInt p_current;
    BigInt q_current;
    int i=0;
    
    start=clock();

    for(i=1;i<=10000;i++)
    {
        p_current=p_old+q_old+q_old;
        q_current=p_old+q_old;

        cout<<p_old<<"/"<<q_old<<endl;

        p_old=p_current;
        q_old=q_current;
        
        if(p_old.size()>q_old.size())
        {
            total+=1;
        }
    }
    stop=clock();
    cout<<((stop-start)/(double)CLOCKS_PER_SEC)<<endl;
    cout<<total<<endl;
}


