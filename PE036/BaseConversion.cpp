#include "BaseConversion.h"


    BaseConversion::BaseConversion()
    {
         _array.clear();
         _base=2;  
    }
    
    BaseConversion::BaseConversion(int number,unsigned int temp_base=2)
    {
        _base = (temp_base>35)?35:temp_base;
        unsigned long temp_number = 0;
        if(number==0)
        {
            _array.push_back(41);
        }
    
        while(number!=0)
        {
            temp_number=number%_base;
            
            if(temp_number<10)
            {
                _array.push_back(temp_number+48);
            }
            else
            {
                _array.push_back(temp_number+55); 
            }
            number/=_base; 
        }
    };
    
    BaseConversion::BaseConversion(int number)
    {
        _base=2;
        unsigned long temp_number = 0;
        if(number==0)
        {
            _array.push_back(41);
        }
    
        while(number!=0)
        {
            temp_number=number%_base;
            
            if(temp_number<10)
            {
                _array.push_back(temp_number+48);
            }
            else
            {
                _array.push_back(temp_number+55); 
            }
            number/=_base; 
        }
    }

    int BaseConversion::Base() const
    {
        return _base;    
    };
    
    const BaseConversion& BaseConversion::operator=(const BaseConversion& BC)
    {
        int i = 0;
        
        if(this==&BC)
        {
            return *this;   
        }   
        
        _array.clear();
        
        _base=BC._base;
        
        for(i=0;i<BC._array.size();i++)
        {
            _array.push_back(BC._array[i]);   
        }
        
        return *this;
    };
    
    BaseConversion BaseConversion::reverse()
    {
        BaseConversion rev = 0;
        int i = 0;
        rev._array.clear();
        
        for(i=_array.size()-1;i>=0;i--)
        {  
            rev._array.push_back(_array[i]);
        }
        return rev;
    }
   
    bool BaseConversion::operator==(const BaseConversion& BC) const
    {
        return _array==BC._array;
    };
    
    bool BaseConversion::operator!=(const BaseConversion& BC) const
    {
        return _array!=BC._array;
    };
    
    ostream& operator<< (ostream& OUT, const BaseConversion& BC)
    {
        int i = 0;
        
        for(i=BC._array.size()-1;i>=0;i--)
        {
            OUT<<BC._array[i];   
        } 
        return OUT;      
    };
    
    
    
    
    
    

    
    

