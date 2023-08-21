#include <iostream>

using namespace std;

int main()
{
    int n,d=1;
    cin>>n;
    while(d<=n)
    {
        if(n%d==0)
            {
                cout<<d<<" ";
            }
        d++;

    }
    return 0;
}
