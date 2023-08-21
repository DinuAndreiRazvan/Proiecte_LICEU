#include<iostream>
using namespace std;
int main()
{
    int n=5,i,s=0;
    s=n+1;
    for(i=n-1;i>=1;i--)
    {
        s=i*s+1;
    }
    cout<<s;
    return 0;
}
