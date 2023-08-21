#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
               if(a[i][j]<a[i][j-1] && a[i][j]<a[i+1][j] && a[i][j]<a[i][j+1])
               {
                   cout<<a[i][j]<<" ";
               }
            }
            else
            {
                if(j==0)
                {
                    if(a[i][j]<a[i-1][j] && a[i][j]<a[i+1][j] && a[i][j]<a[i][j+1])
                    {
                        cout<<a[i][j]<<" ";
                    }
                }
                else
                {
                   if(a[i][j]<a[i-1][j] && a[i][j]<a[i][j-1] && a[i][j]<a[i+1][j] && a[i][j]<a[i][j+1] )
                {
                    cout<<a[i][j]<<" ";
                }
                }
            }

        }
    }
    return 0;
}
