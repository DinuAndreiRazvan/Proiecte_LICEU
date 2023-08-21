#include<iostream>

using namespace std;

int main()
{
     int s[15][15];
     int i,j,n,p,k=1;
     cin>>n>>p;
     for(i=0;i<n;i++)
     {
         for(j=0;j<p;j++)
         {
             s[i][j]=k*k;
             k=k+2;
             cout<<s[i][j]<<" ";
         }
         cout<<"\n";
     }
     return 0;

}
