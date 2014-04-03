#include<iostream>
#include<ctime>
#include "BouncyNumbers.h"
using namespace std;

int main()
{
    clock_t start,end;
    unsigned long total = 0;
    unsigned long i = 0;
    double percentage = 0;
    bool isbouncy;

    start=clock();

    while(percentage!=99)
    {
        i++;
        isbouncy=bouncy_number(i);
        if(isbouncy==true)
        {
            total+=1;
            percentage=(double(total)/i)*100;
        }  
    }

    cout<<percentage<<"   "<<i<<endl;
    end=clock();
    cout<<double(end-start)/CLOCKS_PER_SEC<<endl;
}
