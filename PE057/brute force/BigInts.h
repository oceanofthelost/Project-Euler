#ifndef _BIG_INTS_SDA
#define _BIG_INTS_SDA

    #include <iostream>
    #include <vector>
    using namespace std;
    
    class BigInt
    {
        private:
            vector<int> _array;
        public:
            BigInt();
            BigInt(int*,int);
            BigInt(int);
            BigInt(long);
            long size() const;
            
            const BigInt& operator=( const BigInt&);
            friend ostream& operator<< (ostream&, const BigInt&);
            friend istream& operator>> (istream&,BigInt&);
            BigInt& operator+=(BigInt&);
            BigInt& operator*=(const BigInt&);
            BigInt& operator+=(const int&);
            BigInt& operator*=(const int&);
            BigInt& operator+=(const long&);
            BigInt& operator*=(const long&);
            BigInt operator+ (BigInt&) const;
            BigInt operator* (const BigInt& ) const;
            BigInt operator+ (int) const;
            BigInt operator* (const int ) const;
            BigInt operator+ (long&) const;
            BigInt operator* (const long& ) const;
            
            friend BigInt operator+ (int, BigInt&);
            friend BigInt operator* (int, const BigInt&);
            friend BigInt operator+ (long, BigInt&);
            friend BigInt operator* (long, const BigInt&);
            
            
            
    };
    
    
    
    
    
    
    
    
    
    
    
    
#endif
