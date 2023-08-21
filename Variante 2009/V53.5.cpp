#include<iostream>

using namespace std;

int main()
{
    int a[11][21],m,n,x,y,i,j,aux;
    cin>>m>>n>>x>>y;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=1;j<=n;j++)
    {
        aux=a[x][j];
        a[x][j]=a[y][j];
        a[y][j]=aux;
    }
    cout<<endl;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
