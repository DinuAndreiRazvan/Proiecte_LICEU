#include <iostream>

using namespace std;

int main()
{
    int n,d=1,s=0;
    cin>>n;
    while(d<=n)
    {
        if(n%d==0)
            {
               s=s+d;
            }
        d++;

    }
    cout<<s;
    return 0;
}
