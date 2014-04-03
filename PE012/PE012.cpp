#include<climits>
#include<ctime>
#include<iostream>
using namespace std;

void total_sum();
unsigned int factors(unsigned long,int);



void total_sum()
{
    int i = 0;
    unsigned long total=0; 
    int total_factors=0;
    for(i=1;i<=INT_MAX;i++)
    {
        total=(i*(i+1))/2;
        total_factors=factors(total,i);
        
        if(total_factors>500)
        {
            cout<<"the  "<<i<<"  triangle number has a value of  "<<total<< " and  "<<total_factors<<"  divisors  "<<endl;
            break;
        }

    }   
}

unsigned int factors(unsigned long total, int variable)
{
    unsigned long i=1;
    unsigned long k=total;
    unsigned long factor=0;
    unsigned long gap_number=0;
    for(i=1;i<ULONG_MAX;i++)
    {
        
        if(total%i==0)
        {
            gap_number=k/i;
            factor+=2;
        }
        
        if(gap_number<=i)
        {
            factor-=2;
            break;   
        }
        
    }
    
    return factor;
    
}
    
int main()
{
    clock_t start,stop;
    double t=0.0;
    
    start=clock();
    total_sum();
    stop=clock();
    
    t= (double)(stop-start)/CLOCKS_PER_SEC;
    cout<<t<<endl;
    cout<<"complete"<<endl; 
}




























