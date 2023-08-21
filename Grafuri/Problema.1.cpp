#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("Problema.1.in");

int a[100][100],n, s[100], p[100],ctc[100],nrc;

void dfs1(int x)
{
    s[x]=1;
    for(int i=1;i<= n; i++)
    {
        if(s[i]==0 && a[x][i]==1)
        {
            dfs1(i);
        }
    }
}

void dfs2(int x)
{
    p[x]=1;
    for(int i=1;i<= n; i++)
    {
        if(p[i]==0 && a[i][x]==1)
        {
            dfs2(i);
        }
    }
}

int main()
{
    int x,y;
    fin>>n;
    while(fin>>x>>y)
    {
        a[x][y]=1;
    }

    for(int i=1;i<=n; i++)
    {
        if(ctc[i]==0)
        {
            for(int j=1;j<=n;j++)
            {
                s[j]=0;
                p[j]=0;
            }
            nrc++;
            dfs1(i);
            dfs2(i);
            for(int j=1;j<=n;j++)
            {
                if(s[j]==1 && p[j]==1)
                {
                    ctc[j]=nrc;
                }
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<ctc[i]<<" ";
    }

    return 0;
}
