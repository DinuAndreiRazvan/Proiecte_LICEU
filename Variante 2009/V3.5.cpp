#include <iostream>

using namespace std;
int a[24][24];

int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]==0;
            }
            else
            {
                a[i][j]=n-j;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
