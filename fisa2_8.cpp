#include <iostream>

using namespace std;

int main()
{
    int a,b,sa=0,sb=0,d=1;
    cin>>a>>b;
    while(d<=a/2)
    {
        if(a%d==0)
        {
            sa=sa+d;
        }
        d++;
    }
    d=1;
    while(d<=b/2)
    {
        if(b%d==0)
        {
            sb=sb+d;
        }
        d++;
    }
    if(sa==b&&sb==a)
    {
        cout<<"sunt prietene";
    }
    else
    {
        cout<<"sunt dusmani";
    }
}
