#include<iostream>
using namespace std;

int main()
{
    int i=0;       //variables that i need for loops
    long q=600851475143;

    while(q!=1)       //loop that increments the amound of times you want to reduce the number
    {
        for(i=2;i<q;i++)    //finds a number that we will use to divide q.
        {
            if(q%i==0) //if i can divide evenly into q then we execute the if statments
            {
                break;  //gets us out of the loop
            }
        }
        
        q=q/i;  //divides q by i and stores theresult in q.
                
        cout<<"your number was divided "<<i<<" now it is "<<q<<endl;
    }   
}
