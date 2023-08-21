#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V7.S3.E3.in");

int main()

{
    int a,b,smin=0,smax=0,s=0;
    fin>>a;
    if(a<0)
    {
        s=s+a;
    }
    while(fin>>b)
    {
        if(b<0)
        {
            if( a>0 && (-1)*a>b && s!=0)
                {
                    s=s+a;
                    s=s+b;
                }
            else
                {
                    s=s+b;
                }
        }
        else
        {
            if (b>smax)
            {
                smax=b;
                if(smin>s)
                {
                    smin=s;
                    s=0;
                }
            }
        }
        a=b;

    }
    cout<<smin;


    return 0;
}
