#include<iostream>

using namespace std;

int main()
{
    int n,v[24][24],i,j,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            v[i][j]=p;
            p=p+2;
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}
