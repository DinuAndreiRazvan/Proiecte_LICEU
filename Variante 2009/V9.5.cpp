#include<iostream>

using namespace std;

int main()
{
    int n,a[23][23],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<a[0][j]<<" ";
    }
    for(i=1;i<n;i++)
    {
        cout<<a[i][n-1]<<" ";
    }
    for(j=n-2;j>=0;j--)
    {
        cout<<a[n-1][j]<<" ";
    }
    for(i=n-2;i>=1;i--)
    {
        cout<<a[i][0]<<" ";
    }

   return 0;
}
