#include<iostream>
#include<string.h>

using namespace std;
char a[100][100];
int m,n,F,b[10000][10000],v[10000];

void DFS(int x, int&ok)
{
    if(x!=F-1 && ok==0)
    {
        v[x]=1;
        for(int i=0;i<n*m;i++)
        {
            if(b[x][i]==1 && v[i]==0 && ok==0)
            {
                DFS(i,ok);
            }
        }
    }
    else
    {
        ok=1;
    }
    if(ok==1)
    {
        a[x/n][x%n]='*';
    }
}

int main()
{
    int i,j,s;
    cin>>m>>n;
    cin.get();
    for(i=0;i<m;i++)
    {
        cin.getline(a[i],n);
    }

    for(i=0;i<m-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i][j]==' ')
            {
                if(a[i][j+1]==' ' && j+1!=n)
                {
                    b[i*n+j][i*n+j+1]=1;
                    b[i*n+j+1][i*n+j]=1;
                }
                if(a[i+1][j]==' '  && i+1!=m)
                {
                    b[i*n+j][(i+1)*n+j]=1;
                    b[(i+1)*n+j][i*n+j]=1;
                }
            }
            else
            {
                if(a[i][j]=='S')
                {
                    s=i*n+j+1;
                }
                if(a[i][j]=='F')
                {
                    F=i*n+j;
                }
            }
        }
    }

    int ok=0;
    DFS(s,ok);

    cout<<endl<<endl;
    for(i=0;i<m;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
/*
14 29
||||||||||||||||||||||||||||
S ||        | |            |
| |  || | | | | ||| ||||||||
| ||||| | ||| | |      | | F
|     | |   |   ||| || | | |
| ||||| ||| ||| | | || | | |
| | |     |   | | |  | | | |
| | ||||| ||| | | || | | | |
| |       |        | | | | |
| ||||||| | |||||||| | | | |
|         | |        |   | |
| |||| |||| |||||||| ||||| |
| |  | |           |       |
||||||||||||||||||||||||||||
*/
