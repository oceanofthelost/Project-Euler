#include<iostream>
#include<ctime>
using namespace std;

long chain(long);
int main()
{
    clock_t start,stop;
    bool array[569]={false};//if =0 then it leads to 89, if 1 then leads to 1
    int i=0;
    unsigned long number=false;
    unsigned long total=0;
    
    array[0]=true;
    
    start=clock();
    for(i=1;i<=568;i++)
    {
        number=i;
        while(number!=1 && number!=89)
        {
            number=chain(number);
        }
        if(number==1)
        {
            array[i]=true;
        }

    }

    for(i=1;i<10000000;i++)
    {
        if(array[chain(i)]==0)
        {
            total++;
        }
    }
    
    stop=clock();
    cout<<((stop-start)/(double)CLOCKS_PER_SEC);
    cout<<total<<endl;
}

long chain(long passed)
{
    long sum = 0;

    while(passed>0)
    {
        sum=sum+(passed%10)*(passed%10);
        passed=passed/10;
    }
    return sum;
}
