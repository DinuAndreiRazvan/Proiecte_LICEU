#include<iostream>

using namespace std;

int main()
{
    int n,i,j,a[20][20];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a[i][1]=n-i;
        for(j=2;j<=n;j++)
        {
            if(i+j-1<=n)
            {
                a[i][j]=a[i][j-1]-1;
            }
            else
            {
                a[i][j]=a[i][j-1]+1;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}
