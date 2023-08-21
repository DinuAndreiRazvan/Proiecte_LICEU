#include<iostream>

using namespace std;

int main()
{
    int n,k=1;
    cin>>n;
    while(n>k)
    {
        n=n-k;
        k++;
    }
    cout<<k-n+1;
    return 0;
}
