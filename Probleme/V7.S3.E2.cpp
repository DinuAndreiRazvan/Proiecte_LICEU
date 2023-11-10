#include <iostream>
#include <string.h>

using namespace std;
int v[20];

int main()
{
    int i,j,n,m,k=0,a[20][20];
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        v[a[i][0]]++;
        v[a[i][n-1]]++;
    }
    for(i=1;i<=20;i++)
    {
        if(v[i]==2)
        {
            cout<<i<<" ";
            k++;
        }
    }
    if(k==0)
    {
        cout<<"nepolarizate";
    }

    return 0;
}
