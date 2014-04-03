#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
#include<fstream>
using namespace std;

unsigned triangle_number(unsigned);
vector<unsigned> create_list();
unsigned word_value(string);

int main()
{
    //contains the total number of word values which are triangle
    unsigned is_triangle=0;
    //holds the word value for a single word
    unsigned value=0;
    //create a vector that contains only triangle numbers
    vector<unsigned> list_triangle=create_list();
    //put all triangle numbers into a set. This makes checking for triangle numbers
    //easier in the future. 
    unordered_set<unsigned> triangle(list_triangle.begin(),list_triangle.end());
    //iterator that we will use to see if the word value is contained in the set
    unordered_set<unsigned>::const_iterator got;

    //used with getline to read the word from our file. 
    string data;
    
    ifstream myfile;

    //open myfile to read data
    myfile.open("words.txt",ios::in);

    while(myfile.good())
    {
        getline(myfile,data,',');
        value = word_value(data);
        //determins if the word value is in the set
        got=triangle.find(value);
        //if the word value is in the set we increment our count 
        if(got != triangle.end())
        {
            is_triangle+=1;   
        }
    }
    
    //close the file
    myfile.close();
    
    cout<<is_triangle<<endl;
    return 0;
}

//calculates the triangle number of what is passed in
unsigned triangle_number(unsigned passed)
{
    return (passed*(passed+1))/2;
}

//returns a vector of triangle numbers
vector<unsigned> create_list()
{
    vector<unsigned> list_triangle;
    unsigned i=0;

    //calculates triangle number over a range
    for(i=0;i<300;i++)
    {
        list_triangle.push_back(triangle_number(i));
    }

    return list_triangle;
}

//calculates the numerical value of a word 
unsigned word_value(string passed)
{
    unsigned length = passed.length();
    unsigned value = 0;
    unsigned i = 0;
    
    //calculating the word value. we go character by character
    for(i=0;i<length;i++)
    {
        //stings are read in with the " at the begining and end so 
        //i just read the letters that are in between. 
        if(passed[i]!='"')
        {
            //convert the char to an int and subtract A. This will make each letter 
            //off set by 1 (ex: A=0, B=1, ...) so we add 1 to get the proper 
            //form (ex:A=1, B=2, ...). 
            value+=int(passed[i])-'A'+1;
        }
    }
    return value;
}
