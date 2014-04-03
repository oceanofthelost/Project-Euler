#ifndef _BASE_CONVERSION_SDA
#define _BASE_CONVERSION_SDA

    #include <iostream>
    #include <vector>
    using namespace std;




    class BaseConversion
    {
        private:
            
        vector<char> _array;
        unsigned int _base;
            
        public:
            BaseConversion();
            BaseConversion(int,unsigned int);
            BaseConversion(int);
            BaseConversion BaseConversion::reverse();
            int Base() const;
            
            
            const BaseConversion& operator=(const BaseConversion&);
            bool operator==(const BaseConversion&) const;
            bool operator!=(const BaseConversion&) const;
            friend ostream& operator<< (ostream&, const BaseConversion&);
    };
#endif
