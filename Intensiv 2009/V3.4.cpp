#include<iostream>

using namespace std;
int cif(int a,int b)
{
    int k=0;
    while(a!=0)
    {
        if(a%10==b)
        {
            k++;
        }
        a=a/10;
    }
    return k;
}
int v[10];

int main()
{
   int n,x=0,i,ok,k,invers=0;
   cin>>n;
   while(x<=9)
   {
       v[x]=cif(n,x);
       x++;
   }
   ok=0;
   x=0;
   for(i=9;i>=0;i--)
   {
       if(v[i]%2==1)
       {
           ok=1;
       }
       k=v[i];
       while(v[i]>k/2)
       {
           invers=invers*10+i;
           v[i]--;
       }
   }
   for(i=0;i<=9;i++)
   {
       while(v[i]!=0)
       {
           invers=invers*10+i;
           v[i]--;
       }
   }
   if(ok==1)
   {
       cout<<"NU EXISTA";
   }
   else
   {
       cout<<invers;
   }
   return 0;
}
