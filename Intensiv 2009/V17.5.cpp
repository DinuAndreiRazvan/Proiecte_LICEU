#include<iostream>

using namespace std;

int main()
{
    int n,a[20][20],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
            {
                a[i][j]=i+1;
            }
            else
            {
                a[i][j]=a[i][j-1]+1;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
