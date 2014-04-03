#include<climits>
#include<ctime>
#include<iostream>
using namespace std;

unsigned long triangle_func();
unsigned long pentagon_func(unsigned long);
unsigned long hexagon_func(unsigned long);

const int MAX=ULONG_MAX/2;



int main()
{
    clock_t start,stop;
    double t=0.0;
    unsigned long number=0;
    
    start=clock();
    number=triangle_func();
    stop=clock();

    t=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<t<<endl;
   // cout<<number<<endl;
    
    
   system("pause"); 

}

unsigned long triangle_func()
{
    unsigned long triangle=0;
    unsigned long i=0;
    bool valid;
    
    for(i=300;i<=MAX;i++)
    {
        triangle=(i*i+i)/2;
        //cout<<i<<endl;
        valid=pentagon_func(triangle);
        if(valid==true)
        {
            cout<<triangle<<endl;   
        }
    } 
    return triangle;   
}

unsigned long pentagon_func(unsigned long total)
{
    unsigned long pentagon=0;
    unsigned long i=0;
    bool valid;
    
    for(i=300;i<=MAX;i++)
    {
        pentagon=(3*i*i-i)/2;
         if(pentagon>total)
        {
            return false;   
        }
        else if(pentagon==total)
        {
            valid=hexagon_func(total);  
            if(valid==true)
            {
                return true;  
            }      
        }     
    }   
}

unsigned long hexagon_func(unsigned long total)
{
    unsigned long hexagon=0;
    unsigned long i=0;
    
    for(i=300;i<=MAX;i++)
    {
        hexagon=2*i*i-i;
        if(hexagon==total)
        { 
        return true;   
        }
        if(hexagon>total)
        {
            return false;   
        }
    }  
    
    
}
