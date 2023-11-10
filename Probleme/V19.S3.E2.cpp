#include <iostream>

using namespace std;

int main()
{
    int n,m,k,a[20][20],ok=0,i,j,x=0;
    cin>>m>>n>>k;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<=m;i++)
    {
        ok=0;
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==a[k][j])
            {
                ok=1;
            }
        }
        if(ok==0)
        {
            x=1;
        }
    }
    if(x==1)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }


    return 0;
}
