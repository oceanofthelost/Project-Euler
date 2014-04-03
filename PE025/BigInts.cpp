#include "BigInts.h"

    BigInt::BigInt()
    {
        _array.push_back(0);   
    }

    BigInt::BigInt(int * passed,int size)
    {
        long i=0;

        for(i=size;i>0;i--)
        {
            _array.push_back(passed[i-1]);   
        }
    };

    BigInt::BigInt(int passed)
    {        
        while(passed!=0)
        {
            _array.push_back(passed%10);
            passed=passed/10;
        }
    };   
    
    BigInt::BigInt(long passed)
    {        
        while(passed!=0)
        {
            _array.push_back(passed%10);
            passed=passed/10;
        } 
    }; 

   BigInt  BigInt::sum_digits() const
    {
        long i = 0;
        BigInt sum;
        
        for(i=0;i<_array.size();i++)
        {
            sum+=_array[i];   
        }
        return sum;
    };
    
    long BigInt::size() const
    {
        return _array.size();;   
    }
    
    const BigInt& BigInt::operator=( const BigInt& BI)
    {
        long i = 0;
        
        if(this == &BI)
        {
            return *this;   
        }   
        
        _array.clear();
        
        for(i=0;i<BI._array.size();i++)
        {
            _array.push_back(BI._array[i]);   
        }
        
        return *this;
    };
    
    ostream& operator<< (ostream& OUT, const BigInt& BI)
    {
        int i=0;
        
        for(i=BI._array.size();i>0;i--)
        {
            OUT<<BI._array[i-1];   
        }
        return OUT;    
    };
    
    /*istream& operator>> (istream& IN,BigInt& BI)
    {
       
    };*/
    
    BigInt& BigInt::operator+=(BigInt& passed)
    {
        int i=0;
        int remainder=0;
        int size=0;
        
        if(_array.size()>passed._array.size())
        {
            while(_array.size()!=passed._array.size())
            {
                passed._array.push_back(0);  
            }  
        }    
        else if(passed._array.size()>_array.size())
        {
            while(passed._array.size()!=_array.size())
            {
                _array.push_back(0);   
            }   
        }
        
   
        for(i=0;i<_array.size();i++)
        {
            _array[i]+=passed._array[i]+remainder;
            
            if(_array[i]>=10)
            {
                 remainder=_array[i]/10;
                _array[i]=_array[i]%10;
               
            }
            else
            {
                remainder=0;   
            }
        }
        
        if(remainder!=0)
        {   
            
            _array.push_back(remainder);
        }
  
        return *this;  
    };
    
    BigInt& BigInt::operator*=(const BigInt& passed)
    {
        int i = 0;
        int j = 0;
        int location = 0;
        int remainder = 0;
        int multiplied = 0;
        BigInt temp;
        BigInt solution;
        
        for(i=0;i<passed._array.size();i++)
        {
            temp=0;
            
            if(i!=0)
            {
                for(location=0;location<i;location++)
                {
                    temp._array.push_back(0);   
                }   
            }
            for(j=0;j<_array.size();j++)
            {
                multiplied=_array[j]*passed._array[i]+remainder;
                temp._array.push_back(multiplied);
                
            }
            solution+=temp;
        }
        
        _array=solution._array;
        
        return *this;  
    };
    
    BigInt& BigInt::operator+=(const int& INT)
    {
        BigInt temp(INT);
        return *this+=temp; 
    };
    
    BigInt& BigInt::operator*=(const int& INT)
    {
        BigInt temp(INT);
        return *this*=temp;    
    }; 
    
    BigInt& BigInt::operator+=(const long& LONG)
    {
           BigInt temp(LONG);
           return *this+=temp;
    };
    
    BigInt& BigInt::operator*=(const long& LONG)
    {
        BigInt temp(LONG);
        return *this*=temp;
    };    
            
    BigInt BigInt::operator+ (BigInt& BI) const
    {
        return BigInt(*this)+=BI;
    };
    
    BigInt BigInt::operator* (const BigInt& BI) const
    {
        return BigInt(*this)*=BI;
    };
    
    BigInt BigInt::operator+ (int INT) const
    {
        BigInt temp(INT);
        return BigInt(*this)+=temp; 
    };
    
    BigInt BigInt::operator* (const int INT) const
    {
        BigInt temp(INT);
        return BigInt(*this)*=temp;
    };
            
    BigInt BigInt::operator+ (long& LONG) const
    {
       BigInt temp(LONG);
        return BigInt(*this)+=temp; 
    };
    
    BigInt BigInt::operator* (const long& LONG) const
    {
        BigInt temp(LONG);
        return BigInt(*this)*=temp;
    };
    
    
    BigInt operator+ (int INT,BigInt& BI)
    {
        BigInt temp(INT);
        return temp+=BI;
    };
    
    BigInt operator* (int INT, const BigInt& BI)
    {
        BigInt temp(INT);
        return temp*=BI;
    };
    
    BigInt operator+ (long LONG, BigInt& BI)
    {
        BigInt temp(LONG);
        return temp+=BI;        
    };
    
    BigInt operator* (long LONG, const BigInt& BI)
    {
        BigInt temp(LONG);
        return temp*=BI;
    };
   
   

    














