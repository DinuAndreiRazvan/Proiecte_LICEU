#include<iostream>

using namespace std;

int a[100][100],v[100];

int main()
{
    int n,m,c=0,i,j,x,y,maxi=0;

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
        c=0;
        for(j=1;j<=n;j++)
        {
            if(a[j][i]==1)
            {
                c++;
            }
        }
        if(c>maxi)
        {
            maxi=c;
            for(j=1;j<i;j++)
            {
                v[j]=0;
            }
            v[i]=1;
        }
        else
        {
            if(maxi==c)
            {
                v[i]=1;
            }
        }
    }

    for(i=1;i<n;i++)
    {
        if(v[i]==1)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
