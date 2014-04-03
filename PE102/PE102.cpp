#include <iostream>
#include <fstream>
using namespace std;

struct point
{
    double x;
    double y;
};


int main()
{
    unsigned long numbr_of_triangles=0;
    point p1,p2,p3;
    point p = {0,0};
    double lam1,lam2,lam3;
    ifstream infile;

    infile.open("triangles.txt");

    if(!infile)
    {
        cout<<"error"<<endl;
    }
            
    while(!infile.eof())
    {
        
        infile>>p1.x;
        infile>>p1.y;
        infile>>p2.x;
        infile>>p2.y;
        infile>>p3.x;
        infile>>p3.y;

        if(!infile.eof())
        {
            //this is using the idea of baycentric points found on wikipedia
            lam1=((p2.y-p3.y)*(p.x-p3.x)+(p3.x-p2.x)*(p.y-p3.y))/((p2.y-p3.y)*(p1.x-p3.x)+(p3.x-p2.x)*(p1.y-p3.y));
            if(lam1>=0 && lam1 <= 1)
            {
                lam2=((p3.y-p1.y)*(p.x-p3.x)+(p1.x-p3.x)*(p.y-p3.y))/((p2.y-p3.y)*(p1.x-p3.x)+(p3.x-p2.x)*(p1.y-p3.y));
                if(lam2 >= 0 && lam2 <= 1)
                {
                    lam3 = 1-lam1-lam2;
                    if(lam3>=0 && lam3<=1)
                    {
                        numbr_of_triangles+=1;
                    }
                }
            }
            
            
        }
    }
#if 0
    while(infile >> i)
    {
        cout<<i<<endl;
    }
#endif
    
    infile.close();
    cout<<numbr_of_triangles<<endl;
    return 0;
}
