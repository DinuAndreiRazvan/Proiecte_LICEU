#include<iostream>

using namespace std;
int v[10];

int main()
{
    int n,i;
    cin>>n;
    while(n!=0)
    {
        cin>>i;
        v[i]++;
        n--;
    }
    for(i=0;i<10;i++)
    {
        while(v[i]!=0)
        {
            cout<<i<<" ";
            v[i]--;
        }
    }
    return 0;

}
