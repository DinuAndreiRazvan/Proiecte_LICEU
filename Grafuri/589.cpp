#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("589.in");
ofstream fout("589.out");

int a[101][101],n,v[101];

int main()
{
    int m,x,y,z,i,j,k;

    fin>>n>>m;

    while(fin>>x>>y>>z)
    {
        a[x][y]=z;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j && a[i][j]==0)
            {
                a[i][j]=-1;
            }
        }
    }

    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if( ( a[i][j]>a[i][k]+a[k][j] && a[i][k]!=-1 && a[k][j]!=-1 ) || (a[i][j]==-1 && a[i][k]!=-1 && a[k][j]!=-1) )
                {
                    a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            fout<<a[i][j]<<" ";
        }
        fout<<endl;
    }

    return 0;
}
