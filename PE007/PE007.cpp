#include<cstdio>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    clock_t start, end;
    int i,j,n,prime;        //declare the variables
    i=0;
    j=0;        //set my variables to 0
    n=0;
    prime=1;    //set prime to 1 because i am automaticly assuming 2 is prime by my algorithm
    start=clock();
    cout<<"what n'th prime do you want to find?"<<endl;
    cin>>n;     //input the number of prims you want to find
    fflush(stdin);
    n=n-1;  //must subtract 1 because i am automaticly assuming that 2 is prime 
    cout<<"your prime number "<<endl;
    for(i=3;;i+=2)  //start the loop from here. we exclude even number because all even numbers are not prime
    {               //excluding 2 which is priime by definition
        if(prime!=n) //counter makes sure we have found all the asked for primes
        {
            for(j=3;j<i;j+=1)//loop that checks if a number is dividible by another number. 
            {
                if(i%j==0) //if the mod of i by j is 0 the the number is not a prime.
                {
                    break;  //leavs the j loop
                }
                if(i==(j+1)) //since j cannot equal i because if it did the mod would equal to 0 
                            //thus this would be a dead branch. 
                {            //we create a statment that will end this loop when i is equal to 
                             // j+1 which twlls us that i is prime
                    prime=prime+1; //adds one to the counter
                    if(prime==n)//once our counter(prime)is equal to the n'th prime we display the result. 
                    {
                        cout<<i<<endl;   //displays the prime number
                    }
                }
            }
        } 
        else //once the counter(prime) equals the n'th prime then we break out of the i loop.
        {
            break;
        }    
       end=clock();
    }
    cout<<endl<<end-start<<endl; 
    system("pause");
} 
