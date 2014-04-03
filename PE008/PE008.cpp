#include<stdio.h>
#include<iostream>
using namespace std;

main()
    {
    FILE *fp;
    char array[1000]={0};
    int main_array[1000]={0}, product=0,temp_product=0;
    fp=fopen("Project Euler #8.txt","r");
    int i=0;
       
    for(i=0;i<1000;i++)
    {
        fscanf(fp,"%s ",&(array[i]));
        i++;
    }
    fclose(fp);
    for(i=0;i<1000;i++) 
    {
        main_array[i]=array[i]-48;        
    }
    for(i=0;i<994;i++) 
    {
        temp_product=(main_array[i]*main_array[i+1]*main_array[i+2]*main_array[i+3]*main_array[i+4]); 
        if(temp_product>product)
        {
            product=temp_product;
        }       
    }  
       cout<<product<<endl;
       
       
       
       
    
       system("pause");
       
    }

