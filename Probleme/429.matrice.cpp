#include<iostream>

using namespace std;
int v[100];

int main()
{
    int a[100][100],n,i,j,s_l,ok=0,s_c,s_dp=0,s_ds=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            v[a[i][j]]=1;
        }
    }

    for(i=0;i<n;i++)
    {
        s_l=0;s_c=0;
        for(j=0;j<n;j++)
        {
            s_l=s_l+a[i][j];
            s_c=s_c+a[j][i];

            if(i==j)
            {
                s_dp=s_dp+a[i][j];
            }
            if(i+j+1==n)
            {
                s_ds=s_ds+a[i][j];
            }
        }
        if(s_l!=n*(n*n+1)/2 || s_c!=n*(n*n+1)/2)
        {
            ok=1;
        }
    }

    if(s_dp!=n*(n*n+1)/2 || s_ds!=n*(n*n+1)/2)
    {
        ok=1;
    }

    if(ok==0)
        cout<<"ok";

    return 0;
}
