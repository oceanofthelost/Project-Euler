#include<iostream>
#include<ctime>
using namespace std;


unsigned long even(unsigned long n);
unsigned long odd(unsigned long n);
unsigned long loop(unsigned long n);
 



int main()
{
    clock_t start,stop;
    unsigned long number =13;
    unsigned long counter = 0;
    unsigned long max=0;
    unsigned long max_number=0;
    
    start=clock();
    for(number=1;number<=1000000;number++)
    {
        counter=loop(number);
        if(counter>max)
        {
            max=counter;
            max_number=number;
        }
    }

    stop=clock();
    cout<<((stop-start)/(double)CLOCKS_PER_SEC)<<endl;
    cout<<"number:  "<<max_number<<"  chain:  "<<max<<endl;
}

unsigned long even(unsigned long n)
{
    n/=2;
    return n;   
}

unsigned long odd(unsigned long n)
{
    n*=3;
    n+=1;
    return n;   
}

unsigned long loop(unsigned long number)
{
    unsigned long counter = 1;

    do{
            if(number%2==0 && number!=1)
            {   
                counter+=1;
                number=even(number);
                //cout<<number<<endl;
            }
            if(number%2!=0 && number!=1)
            {
                counter+=1;
                number=odd(number);
                //cout<<number<<endl;   
            } 
        }while(number!=1);
        
        return counter;
}
