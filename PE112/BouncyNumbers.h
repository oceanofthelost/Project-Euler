#include<iostream>
using namespace std;



template<typename T>
bool increasing(T passed)
{
    unsigned current = 0;
    unsigned previous = passed%10;

    passed/=10;

    while(passed>0)
    {
        current = passed%10;
        if(current > previous)
        {
            return false;
        }
        previous=current;
        passed/=10;
    }
    return true;
}

template<typename T>
bool decreasing(T passed)
{
    unsigned current = 0;
    unsigned previous = passed%10;

    passed/=10;

    while(passed>0)
    {
        current = passed%10;
        if(current < previous)
        {
            return false;
        }
        
        previous=current;
        passed/=10;
    }
    return true;
}

template<typename T>
bool bouncy_number(T passed)
{
    bool increase=increasing(passed);
    bool decrease=decreasing(passed);

    if(increase==false && decrease==false)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

