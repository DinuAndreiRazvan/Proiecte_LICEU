#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("430.in");
ofstream fout("430.out");
int v[100],a[100][100];

int main()
{
    int n,i,j,c=0,ok;

    fin>>n;

    while(fin>>i>>j)
    {
        a[i][j]=1;
        a[j][i]=1;
    }

    for(i=1;i<=n;i++)
    {
        ok=0;
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                ok=1;
            }
        }
        if(ok==0)
        {
            c++;
            v[i]=1;
        }
    }

    fout<<c<<" ";

    for(i=1;i<=n;i++)
    {
        if(v[i]==1)
        {
            fout<<i<<" ";
        }
    }

    return 0;
}
