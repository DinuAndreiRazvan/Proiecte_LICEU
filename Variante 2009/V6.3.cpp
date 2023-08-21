#include <iostream>
#include<fstream>

using namespace std;
ofstream fout("V6.3.out");

void s1(int&a,int&b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}
int s2(int a[100],int p, int q)
{
    int i,ok=-1;
    for(i=p;i<=q;i++)
    {
        if(a[i]%5==0)
        {
            ok=i;
            return ok;
        }
    }
    return ok;
}


int main()
{
    int a[100],n,i,ok,k,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ok=s2(a,0,n-1);
    k=s2(a,ok+1,n-1);
    c=k;
    while(k!=-1)
    {
        c=k;
        k=s2(a,k+1,n-1);
    }
    if(ok!=-1 && c!=-1)
    {
        s1(a[ok],a[c]);
    }
    for(i=0;i<n;i++)
    {
        fout<<a[i]<<" ";
    }
    return 0;
}
