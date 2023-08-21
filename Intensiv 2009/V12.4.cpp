#include<iostream>

using namespace std;

int main ()
{
    int n,v[20],i=0,a,b,aux,ok,j;
    cin>>n;
    while(n!=0)
    {
        ok=0;
        cin>>a;
        aux=a;
        b=aux%10;
        while(aux!=0)
        {
            if(aux%10!=b)
            {
                ok=1;
            }
            aux=aux/10;
        }
        if(ok==0)
        {
            v[i]=a;
            i++;
        }
        n--;
    }
    n=i;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
