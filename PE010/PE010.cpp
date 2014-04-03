#include<cstdio>
#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;


//calculate the primes unser 2,000,000
int main()
{
    clock_t start, end; //used to time the program
    int array[200000]={2};  //declare the cariables that i will use in the program
    int i=0,j=0,max=0,temp=0;
    unsigned long long sum=0ll,a=0ll;

    cin>>max;   //take in the limit that we will look up to to find prims
    //cout<<endl;

    start=clock();  //starts the timer
    for(i=3;;i+=2)  //loop that generates the main number that we check to see if it is a prime
    {
        if(array[a]<max) //if the entry in the array is greater then max we do not exicute the bellow code.
        {
            for(j=0;j<=i;j++) //this loop uses the array that is storing our list of primes that have been found.
            {
                if(i%array[j]==0)//if any of number is divisible by the stored prime then we leave the loop.
                {
                    break;
                }
                else if(j==a)   //one the inner loop j has reached the counter a we exicute this code.
                {
                    sum+=array[a];  //the total sum is each entry of the array added together.
                    cout<<sum<<"\t"<<array[a]<<"\t"<<a+1<<endl; //displays information to the user.
                    a+=1;   //when a prime is found adds one to the counter a.
                    array[a]=i; //when a prime it found it is put into am array that we use to check against all checks of primes
                    break;
                }
            }
        }
        else if(array[a]>max)   //if the array entry is greater then max we leave the i loop.
        {
            break;
        }
    }
    end=clock();//ends the clock
    cout<<endl<<end-start<<endl;    //displays the time elapsed.
//    system("pause");
}
