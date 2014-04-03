#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void read_in(vector<string>&); //reads in the text file into a vector

int main()
{
    vector<string> array;
    vector<string>::iterator its;
    string temp;
    string::iterator it;
    vector<unsigned long> score;
    vector<unsigned long>::iterator itul;
    unsigned long sum = 0;
    unsigned int i = 0;

    read_in(array);
    sort(array.begin(),array.end());
   
    i=1;
    for(its=array.begin();its<array.end();its++)
    {
        sum = 0;
        temp = *its;
        for(it=temp.begin();it<temp.end();it++)
        {
               sum += *it-'A'+1;
        }
        score.push_back(sum*i);
        i++;
    }

    sum=0;
    for(itul=score.begin();itul<score.end();itul++)
    {
        sum+=*itul;
    }
    cout<<sum<<endl;

    return 0;
}

void read_in(vector<string>& array)
{
    string line;

    ifstream myfile ("names.txt");

    if(myfile.is_open())
    {
        while(myfile.good())
        {
            myfile>>line;
            if(!myfile.eof())
            {
                array.push_back(line);
            }
        }
        myfile.close();
    }
    else
    {
        cout<<"cant open file"<<endl;
    }
}
