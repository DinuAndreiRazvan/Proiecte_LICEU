#include<iostream>

using namespace std;

int main()
{
    int n,p,a[20][20],i,j,x=1;
    cin>>n>>p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            a[i][j]=x*x;
            x=x+2;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
