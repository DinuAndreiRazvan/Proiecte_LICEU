#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("cheltuieli.in");
int v[100];

int main()
{
   int t,n,p,s=0,k=0,i;
   while(fin>>t>>n>>p)
   {
       v[t]=v[t]+n*p;
       if(s<v[t])
       {
           s=v[t];
       }
   }
   for(i=0;i<100;i++)
   {
       if(v[i]==s)
       {
           k++;
       }
   }
   cout<<s<<" "<<k;

}
