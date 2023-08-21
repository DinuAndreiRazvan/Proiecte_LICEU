#include <iostream>

using namespace std;

int main()
{
    int a[24][24],n,i,j;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j+1==n)
            {
               a[i][j]=0;
            }
            else
            {
                a[i][j]=n-i;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}

