#include<iostream>

using namespace std;

int main()
{
    int n,i,j,v[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        cout<<v[i][0]<<" ";
    }
    for(j=0;j<n-1;j++)
    {
        cout<<v[n-1][j]<<" ";
    }
    for(i=n-1;i>0;i--)
    {
        cout<<v[i][n-1]<<" ";
    }
    for(j=n-1;j>=1;j--)
    {
        cout<<v[0][j]<<" ";
    }


}
