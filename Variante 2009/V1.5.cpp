#include<iostream>

using namespace std;

int main()
{
    int n,m,A[10][10],i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i>j)
            {
                A[i][j]=j;
            }
            else
            {
                A[i][j]=i;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
