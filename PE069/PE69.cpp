#include<iostream>
#include<ctime>
using namespace std;

long gcd(long,long);

int main()
{
    clock_t start, end;
    long a = 510510;
    long b = 0;
    long returned=0;
    long count=0;
    double result=0;
    double result_temp=0;
    long max=0;

    start=clock();
       
        for(b=1;b<a;b++)
        {
            returned=gcd(a,b);

            if(returned==1)
            {
                count++;
            }
        }
        //result_temp=a/double(count);
        cout<<count<<endl<<a/double(count);
    
    end=clock();
    cout<<((end-start)/(double)CLOCKS_PER_SEC)<<endl;
    cout<<"number: "<<max<<endl;
    cout<<"ratio: "<<result<<endl;
}

long gcd(long a, long b)
{
    long remainder=0;

    if(a<0)
    {
        a=-a;
    }
    if(b<0)
    {
        b=-b;
    }

    do{
        //cout<<a<<endl;
        a=a-b;
        remainder=a;
        if(b>a)
        {
            a=b;
            b=remainder;
        }
      }while(remainder!=0);

    return a;
}
