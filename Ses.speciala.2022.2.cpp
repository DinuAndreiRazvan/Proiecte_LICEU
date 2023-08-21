#include<iostream>

using namespace std;

int main()
{
    int n,i,j,a[101][101];

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
        for(j=i;j<n-1;j++)
        {
            a[i][j]=a[i][j+1];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
