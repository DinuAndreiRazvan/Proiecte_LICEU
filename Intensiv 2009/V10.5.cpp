#include<iostream>

using namespace std;

int main()
{
    int i,j,n,p,a=0,v[20][20];
    cin>>n>>p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
           v[i][j]=a*a;
           a=a+2;
           cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
