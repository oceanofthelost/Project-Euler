#include <iostream>
using namespace std;


unsigned long truncate(unsigned long); //makes sure the number is not larger than 10 digits
unsigned long length(unsigned long);    //finds the current size of the number


int main()
{
    unsigned long number = 1; //starts our number at 1
    
    for (int  i = 0;  i < 7830457;  i++) //this will multiply 2 by itself 7830457 times
    {
        number*=2;
        number=truncate(number);        //if the number is larger than 10 digits it will truncate
    }                                   //accordingly

    number=(number*28433)%10000000000;  //multiples by 38433 and mods by 1e10 so we have a 10 difit number

    number+=1; //adds one to the number

    cout<<number<<endl;
}

unsigned long truncate(unsigned long passed)
{
    unsigned long size = length(passed);    //will contain the size of our number
    

    if(size>10)     //if the size is greater than 10 we will truncate
    {
        passed=passed%10000000000;  //truncate by the mod of 1e10
    }

    return passed; //retuen the trncated number
}

unsigned long length(unsigned long passed)
{
    unsigned long size=0; //the initial size is 0

    while(passed>9)     //if our number is greater than 9 we will have to divide by 10
    {
        passed/=10;     //the number is decreased in size by one digit
        size+=1;    //the size is increased by 1
    }

    return size;    //retursn the size of the number
}
