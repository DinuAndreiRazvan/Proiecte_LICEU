#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V20.S3.E3.in");

int main()
{
    int a,b,s=0,smax=0;
    fin>>a;
    s=a;
    while(fin>>b)
    {
       if(a%2==b%2)
       {
           s=s+b;
       }
       else
       {
            if(s>smax)
            {
                smax=s;
            }
            s=b;
       }
       a=b;
    }
    if(s>smax)
    {
        smax=s;
    }
    cout<<smax;
    return 0;
}
