#include<iostream>

using namespace std;

int a[100][100],v[100];

int main()
{
    int n,m,c=0,i,j,x,y,k1,k2,maxi;

    cin>>n>>m;
    i=0;
    while(i<m)
    {
        cin>>x>>y;
        a[x][y]=1;

        i++;
    }

    for(i=1;i<=n;i++)
    {
        k1=0;k2=0;
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                k1++;
            }
            if(a[j][i]==1)
            {
                k2++;
            }
        }
        if(k1==k2)
        {
            c++;
            v[i]=1;
            maxi=i;
        }
    }
    cout<<c<<endl;
    for(i=1;i<=maxi;i++)
    {
        if(v[i]==1)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
