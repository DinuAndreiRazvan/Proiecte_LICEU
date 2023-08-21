#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("437.in");
ofstream fout("437.out");
int v[100],a[100][100],n;

void DFS(int x)
{
    v[x]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[x][i]==1 && v[i]==0)
        {
            DFS(i);
        }
    }

}

int main()
{
    int i,j,ok=1;

    fin>>n;

    while(fin>>i>>j)
    {
        a[i][j]=1;
        a[j][i]=1;
    }

    DFS(1);

    for(i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            ok=0;
        }
    }

    if(ok==0)
    {
        fout<<"NU";
    }
    else
    {
        fout<<"DA";
    }

    return 0;
}

