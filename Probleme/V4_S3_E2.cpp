#include <iostream>

using namespace std;

int main()
{
    int cnt=0,k=0,n,m,i,j,v[20][20];
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    for(j=1;j<n;j++)
    {
        k=0;
        for(i=0;i<m;i++)
        {
            if(v[i][j]==v[i][0])
            {
                k=1;
            }
        }
        if(k==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;



    return 0;
}
