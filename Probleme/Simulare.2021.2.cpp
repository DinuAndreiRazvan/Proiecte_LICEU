#include <iostream>
#include <string.h>
#include<math.h>

using namespace std;

int main()
{
    int a[20][20],n,k,i,j,x,v[20];
    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           cin>>a[i][j];
        }
    }
    x=a[k][k-1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(i==k && j<k)
           {
               v[j]=a[i][j];
           }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(i==k && j<k)
           {
               a[i][j]=v[j-1];
           }
        }
    }

    a[k][1]=x;
    cout<<endl;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

