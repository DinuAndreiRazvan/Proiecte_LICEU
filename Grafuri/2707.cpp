#include<iostream>
using namespace std;

int main()
{
    int n,i,j,a[100][100],ok=1;

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
            if(a[i][j]!=a[j][i] || (i==j && a[i][j]==1))
            {
                ok=0;
                j=n;
                i=n;
            }
        }
    }

    cout<<ok;

    return 0;
}
