#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j,a[100][100];
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=(j*i)%10;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
