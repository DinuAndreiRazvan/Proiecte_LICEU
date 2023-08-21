#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V21.in");

int main()
{
    int n,k,x,i=0,v[5000],j=0,p=0;
    float s=0,m,maxim=0;
    fin>>n>>k;
    while(k!=0)
    {
       fin>>x;
       v[j]=x;
       j++;
       s=s+x;
       k--;
    }
    k=j;
    p++;
    m=(float)s/j;
    if(m>maxim)
    {
        maxim=m;
        i=p;
    }
    n=n-k;
    while(n!=0)
    {
       fin>>x;
       p++;
       s=s-v[0]+x;
       for(j=0;j<k;j++)
       {
           v[j]=v[j+1];
       }
       v[k-1]=x;
       m=(float)s/j;
        if(m>maxim)
        {
            maxim=m;
            i=p;
        }
        n--;
    }
    cout<<i;

}
