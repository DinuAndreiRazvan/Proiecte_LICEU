#include<iostream>

using namespace std;

int main()
{
    int n,d=1,k=0;
    cin>>n;
    while(d<=n)
    {
        if(n%d==0)
        {
            k++;
        }
        d++;
    }
    cout<<k;
    return 0;
}
