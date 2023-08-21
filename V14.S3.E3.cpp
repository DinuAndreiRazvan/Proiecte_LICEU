#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V14.S3.E3.in");

int main()
{
    int n,min1=0,min2=0,min3=0;
    while(fin>>n)
    {
        if(n%100==20)
        {
            if(min1>n || min1==0)
            {
                min3=min2;
                min2=min1;
                min1=n;
            }
            else
            {
                if(min2>n ||min2==0)
                {
                    min3=min2;
                    min2=n;
                }
                else
                {
                    if(min3>n || min3==0)
                    {
                        min3=n;
                    }
                }
            }
        }
    }
    cout<<min1<<" "<<min2<<" "<<min3;
    return 0;
}
