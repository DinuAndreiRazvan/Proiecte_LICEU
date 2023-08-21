#include<iostream>

using namespace std;

int main()
{
    int a[100][100],n,m,i,j,p=0;
    cin>>m>>n;

    for(i=m-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            a[i][j]=p*p;
            p=p+2;
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
