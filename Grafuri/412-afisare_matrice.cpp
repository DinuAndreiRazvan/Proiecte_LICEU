#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("412.in");
ofstream fout("412.out");
int v[100][100];

int main()
{
    int i,j,a,b,m,n;

    fin>>n>>m;

    while(fin>>a>>b)
    {
        v[a][b]=1;
        v[b][a]=1;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            fout<<v[i][j]<<" ";
        }
        fout<<endl;
    }

    return 0;
}
