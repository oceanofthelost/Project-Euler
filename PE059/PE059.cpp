#include<iostream>
#include<fstream>
using namespace std;


int inc();

int main()
{
    int array[1201]={0};
    char array2[1203]={0};
    char result[1201]={0};
    unsigned long sum=0;
    ifstream inFile;
    int i;
    char char1=96;
    char char2='a';
    char char3='a';
    bool valid=true;
    
    inFile.open("cipher1.txt");

    if(!inFile)
    {
        cout<<"cant open file"<<endl;
    }

    for(i=0;i<1201;i++)
    {
        inFile>>array[i];
    }

    inFile.close();
#if 0
    //this part of the code brute forced the key.
    //the key is lowercase 'god'.
    while(getchar()!='q')
    {

        char1=char1+inc();
        
        if(char1==123)
        {
            char1='a';
            char2+=1;
        }
        if(char2==123)
        {
            char2='a';
            char3+=1;
        }
        cout<<char1<<char2<<char3<<endl;

        for(i=0;i<1203;i+=3)
        {
            array2[i]=char1;
            array2[i+1]=char2;
            array2[i+2]=char3;
        }

        for(i=0;i<1201;i++)
        {
            result[i]=array[i]^array2[i];    
        }

        for(i=0;i<1201;i++)
        {
            if((result[i]>=0 && result[i]<=31) || result[i]==127)
            {
                valid=false;
                break;
            }
            
        }
        if(valid==true)
        {
            for(i=0;i<1201;i++)
            {
                cout<<result[i]<<" ";
            }
        }
        valid = true;
        if(char1=='z' && char2=='z' && char3=='z')
        {
            break;
        }

    }

    cout<<array2[0]<<array2[1]<<array2[2]<<endl;
#endif

    //this code will calculate the solution to our problem

    char1='g';
    char2='o';
    char3='d';
        
    for(i=0;i<1203;i+=3)
    {
        array2[i]=char1;
        array2[i+1]=char2;
        array2[i+2]=char3;
    }

    for(i=0;i<1201;i++)
    {
        result[i]=array[i]^array2[i];    
    }

    for(i=0;i<1201;i++)
    {
        cout<<result[i];
        sum+=result[i];
    }

    cout<<endl<<sum<<endl;
    return 0;
}

int inc()
{
    return 1;
}
