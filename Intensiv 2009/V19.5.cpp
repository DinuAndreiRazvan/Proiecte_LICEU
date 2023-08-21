#include<iostream>

using namespace std;

int main()
{
    int n,a[20][20],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
            {
                a[i][j]=i+j;
            }
            else
            {
                if(j==1)
                {
                    a[i][j]=a[i-1][j];
                }
                else
                {
                    a[i][j]=a[i-1][j-1];
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}
