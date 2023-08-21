#include<iostream>

using namespace std;

int main()
{
    int n,j,i,a[24][24];
    cin>>n;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               a[i][j]=0;
           }
           else
           {
               a[i][j]=n-j;
           }
           cout<<a[i][j]<<" ";
       }
       cout<<"\n";
    }
    return 0;
}
