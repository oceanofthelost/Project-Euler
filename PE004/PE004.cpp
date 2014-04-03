#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char array[10]; //the string for the initial number
    char array_reverse[10]; //the string of the number reversed
    char *ptr=array;    //pointer to the main array
    int i=0,j=0,l=0,m=0,n=0;    //used in the for loop
    int k=0; //the  number 
    int palindrom=0;  //will hold the largest palindrom
    
    for(i=100;i<=999;i++)
    {
        for(j=100;j<=999;j++)
        {
            k=i*j;
            itoa(k,array,10); //converts the number to a string
            l=strlen(ptr);  //find the lenght of the number
            n=l-1;  //
            for(m=0;m<l;m++)
            {
                array_reverse[n]=array[m]; //reverses the string and put it in an array
                n--;   
            }
            if(strcmp(array,array_reverse)==0) //compares the number to the numbebr reversed
            { 
                if(palindrom<k)
                {
                    palindrom=k;  
                    cout<<palindrom<<endl; 
                }
            }
        }     
    } 
}
