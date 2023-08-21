#include<iostream>

using namespace std;

int main()
{
    int n,i,j,s=0,a[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j+1>n && i<j && j!=n-1)
            {
                s=s+a[i][j];
            }
        }
    }
    cout<<s;
}
