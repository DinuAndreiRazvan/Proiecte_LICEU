#include<iostream>

using namespace std;

int main()
{
    int n,k,a[25][25],i,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(k>j)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=2;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
