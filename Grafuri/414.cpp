#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("414.in");
ofstream fout("414.out");

int v[100][100];

int main()
{
    int n,i,j,a,b,k,u[100];

    fin>>n;

    while(fin>>a>>b)
    {
        v[a][b]=1;
        v[b][a]=1;
    }

    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=n;j++)
        {
            if(v[i][j]==1)
            {
                u[k]= j;
                k++;
            }
        }
        fout<<k<<" ";
        for(int j=0;j<k;j++)
        {
            fout<<u[j]<<" ";
        }
        fout<<endl;
    }

    return 0;
}
