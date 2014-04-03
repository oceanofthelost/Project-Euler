#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    string base_string;
    string exponent_string;
    int base_integer=0;
    int exponent_integer=0;
    unsigned line_number=0;
    unsigned line_max=0;
    double max=0;
    double temp=0; //will hold value log(c)=b*log(a)
    ifstream myfile;
    
    //open the file that we will read from
    myfile.open("base_exp.txt", ios::in);
    
    while(myfile.good())
    {
        //read the base and exponent from the file
        getline(myfile,base_string,',');
        getline(myfile,exponent_string);
        line_number+=1;
        //convert the base and exponent string to integer form
        base_integer=atoi(base_string.c_str());
        exponent_integer=atoi(exponent_string.c_str());
        
        //use log to find number rased to power
        //a^b = c -> b*log(a) = log(c)
        //so now we just find the largets number for log(c) and 
        //that will be the solution.
        
        temp=exponent_integer*log(base_integer);
        if(temp > max)
        {
            max=temp;
            line_max=line_number;
        }
    }
    
    //close our file
    myfile.close();
    //display the max
    cout<<line_max<<endl;

    return 0;
}
