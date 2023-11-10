#include<iostream>

using namespace std;

int main()
{
    int n,k,i,j,aux,a[20][20];
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    aux=a[k][1];
    for(j=1;j<=k-1;j++)
    {
        a[k][j]=a[k][j+1];

    }
    a[k][k-1]=aux;
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}
