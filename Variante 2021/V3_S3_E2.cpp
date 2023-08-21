#include<iostream>

using namespace std;

int main()
{
    int m,n,a[20][20],i,j,ok=0;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        if(a[i][0]!=0)
        {
               for(j=0;j<m;j++)
            {
                if(a[i][0]==a[j][n-1])
                {
                    cout<<a[i][0]<<" ";
                    ok=1;
                }
            }
        }
    }
    if(ok==0)
    {
        cout<<"NU EXISTA";
    }


}
