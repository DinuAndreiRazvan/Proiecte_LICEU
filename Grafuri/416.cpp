#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("416.in");
ofstream fout("416.out");

int a[100][100];

int main()
{
    int n,j,i,k;

    fin>>n;

    while(fin>>i>>j)
    {
        a[i][j]=1;
        a[j][i]=1;
    }

    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                k++;
            }
        }
        fout<<k<<" ";
    }

    return 0;
}
