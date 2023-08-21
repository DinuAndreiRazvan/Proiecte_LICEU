#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int i,s[300],n,p,aux;
     cin>>n;

     for(i=1;i<=3*n;i++)
     {
         cin>>s[i];
     }
     p=2*n;

     for(i=1;i<=n;i++)
     {
         aux=s[p+i];
         s[p+i]=s[i];
         s[i]=aux;
     }
     for(i=1;i<=3*n;i++)
     {
         cout<<s[i]<<" ";
     }
     return 0;

}
