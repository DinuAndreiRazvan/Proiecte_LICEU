#include<iostream>
#include<math.h>

using namespace std;

void patrate(int n,int&x,int&y)
{
    int d=2;
    while(d*d<n)
    {
        y=n/(d*d);
        y=sqrt(y);
        if(y*y*d*d==n && d<y)
        {
            x=d;
            d=n;
        }
        d++;
    }
    if(d-1!=n)
    {
        x=0;
        y=0;
    }
}

int main()
{
    int x,y;

    patrate(16,x,y);

    cout<<x<<" "<<y;

    return 0;
}
