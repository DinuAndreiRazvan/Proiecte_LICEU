#include <iostream>

using namespace std;

int main()
{
    int n,d=2,k=0;
    cin>>n;
    while(d<=n/2)
    {
        if(n%d==0)
            {
                k=1;
            }
        d++;
    }
    if(k==0)
    {
            cout<<"nr este prim";
    }
    else
    {
        cout<<"nu este prim";
    }

    return 0;
}

