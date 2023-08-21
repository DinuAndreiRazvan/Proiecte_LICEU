#include<iostream>

using namespace std;

int main()
{
    int n,i,j,a[25][25];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j-1==n)
            {
                a[i][j]=0;
            }
            else
            {
                if(i+j-1<n)
                {
                    a[i][j]=j;
                }
                else
                {
                    a[i][j]=n-i+1;
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}
