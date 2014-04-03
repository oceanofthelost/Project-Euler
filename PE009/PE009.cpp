#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a=1,b=1,c=1; //decaring the variab;es that i will need
    long long product=0ll;
    double number=0;
    
    cin>>number; //takes in the number that will be constant
    
    for(a=100;a<500;a++)    //loop for first variable
    {
        for(b=100;b<500;b++)    //loop for second variable
        {
            for(c=100;c<500;c++)    //loop for third variable
            {
                if(pow(a,2)+pow(b,2)==pow(c,2)) //the sum of a and be squared eqals c will
                {                               //make the program run the next code
                    if(a+b+c==number)   //only true if the sum of a b and c is equal to the constant
                    {
                    cout<<"these are your numbers"<<endl<<a<<endl<<b<<endl<<c<<endl;
                    product=a*b*c;  //calculates the product of a b and c
                    cout<<"there product is"<<endl<<product<<endl;  //displays the product
                    }
                } 
            }
        }
    } 
    system("pause");
}
