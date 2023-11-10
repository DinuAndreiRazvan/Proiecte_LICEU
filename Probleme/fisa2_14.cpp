#include <iostream>

using namespace std;

int main()
{
    int p,s=0,d=2;
    cin>>p;
    s=s+p%10;
    p=p/100;
    s=s+p%10;
    p=0;
    while(d<=s/2)
    {
        if(s%d==0)
        {
            p=1;
        }
        d++;
    }
    if(p==0)
    {
        cout<<"suma este prima";

    }
    else
        {
            cout<<"suma nu este prima";
        }
    return 0;
}
