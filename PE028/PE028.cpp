/***********************************************
 Project Euler #28
 this will find the sum of diagonals of a spiral 
 matrix. we can only add 1 once because it is in both 
 sums. so i included it in the secons for loop. the 
 first for loop dose not add 1. 
 **********************************************/
#include <iostream>
using namespace std;

int main()
{
    unsigned long i = 0;
    unsigned long j = 0;
    unsigned long scale = 0;
    unsigned long number = 1;
    unsigned long sum = 0;

    scale = 4;
    j=2;
    for(i=1;i<1001;i++) //this will not include 1
    {
        number= number+scale;
        sum+=number;
        if(i%2==0)
        {
            scale=4*j;    //all of the numbers are n places apart. 
            j++;            //there specific location is determinded by the
            //scale. 
        }
    }
    
    number = 1;
    scale = 2;
    j=0;
    for(i=1;i<=1001;i++) //this will include 1
    {
        number=number+j;
        j=j+2;      //each number is 2 units+j units form the last.
        sum+=number;
    }

    cout<<sum<<endl;
}
