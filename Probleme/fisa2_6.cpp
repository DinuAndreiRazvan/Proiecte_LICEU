#include <iostream>

using namespace std;

int main()
{
    int a,d=1,s=0;
    cin>>a;
    while(d<=a/2)
    {
        if(a%d==0)
        {
            s=s+d;
        }
        d++;
    }
    if(a==s)
    {
        cout<<"este nr perfect";
    }
    else
    {
        cout<<"nu este";
    }
    return 0;
}
