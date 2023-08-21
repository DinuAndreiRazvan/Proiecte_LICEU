#include<iostream>

using namespace std;

int a[100][100];

int main()
{
    int n,m,c=0,i,j,x,y,k=0;

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
        if(c==0)
        {
            cout<<i<<" ";
            k=1;
        }
    }
    if(k==0)
    {
        cout<<"Nu exista";
    }

    return 0;
}
