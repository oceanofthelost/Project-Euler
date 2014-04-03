#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double j=0;
    double l=0;
    double sum1=0;
    double sum2=0;
    double i=0;
    double k=0;
    int tot=0;
    
        for(i=1;i<=100;i++)
    { 
        k=pow(i,2);
        sum1+=k;
    }
    
        for(j=1;j<=100;j++)
    { 
        l+=j;
    }
    sum2=pow(l,2);
    tot=sum2-sum1;
    cout<<tot;
    
system("pause");
}
