#include <iostream>
using namespace std;

const unsigned long long ULL_MAX = 18446744073709551614ull;

unsigned long long num_digits ( unsigned long long l);
unsigned long long rev_digits(unsigned long long l);
bool is_palindrome(unsigned long long l);
bool overflow (unsigned long long l);


int main()
{
    unsigned long long i=0ull;
    unsigned long long j=0ull;
    unsigned long long counter=0ull;
	unsigned long long Lychrel =0ull;
    bool k=false; 
	bool limit;
    unsigned long long digits=0ull;
    
    for(i=1;i<=10000;i++)  
    {
        counter=0;
		j=i+rev_digits(i);
        k=is_palindrome(j);
        while(k==false)
        {
			counter+=1;
            j=j+rev_digits(j);
			//cout<<counter<<"\t"<<j<<endl;
            k=is_palindrome(j);
			if(k==true)
			{
				break;
			}
			if(counter==50)
			{
				Lychrel+=1;
				cout<<i<<"  is a Lychrel number"<<endl;
				break;
			}
        }
    }
	cout<<"there are a total of  "<<Lychrel<<" between 1 and "<<i-1<<endl; 
}

unsigned long long  num_digits ( unsigned long long l)
{
	unsigned long long  digits = 0ull;
	unsigned long long number = l;  
	
	while( number  > 0)
	{
		number = number / 10; 
		digits++;            
	}                          
	return digits;             
}

unsigned long long rev_digits(unsigned long long l)
{
    unsigned long long number=l;
    unsigned long long number_digits=0ull;
    unsigned long long rev=0ull;
    unsigned long long mod=0ull;
    unsigned long long len_temp=number_digits; 
    unsigned long long num_temp=1ull; 
    
    number_digits=num_digits(l);
    
    for(number_digits;number_digits!=0;number_digits--)
    {
        len_temp=number_digits; 
        num_temp=1ull;    
    
        mod=number%10;  
        number/=10; 
     
        while(len_temp>1)  
        {               
            num_temp*=10;   
            len_temp--;
        }
        rev+=(mod*num_temp);      
    }                         
     return rev;                
}

bool is_palindrome(unsigned long long l)
{
    unsigned long long num_compare= 0ull;  
    
    num_compare = rev_digits(l);         
     
    if(num_compare==l) 
    {
     return true;   
    }
    else if(num_compare!=l) 
    {
        return false;
    }    
}

bool overflow (unsigned long long l)
{
	unsigned long long limit=ULL_MAX;
	unsigned long long num_rev =0;
	
	num_rev=rev_digits(l);
	limit=limit-num_rev;
	
	if(l>limit)
	{
		return true;	
	}
	else if( l<limit)
	{
		return false;
	}
}
