#include <iostream>
#include<fstream>

using namespace std;
ofstream fout("BAC.TXT");

void s2(int&a,int&b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}
void s1(int a[100],int&p, int&q)
{
    int i,ok=0,x,y;
    x=-1;
    y=-1;
    for(i=p;i<=q;i++)
    {
        if(a[i]%2==0)
        {
            if(ok==0)
            {
                x=i;
                ok=1;
            }
        }
        else
        {
            y=i;
        }

    }
    p=x;
    q=y;
}


int main()
{
    int a[100],n,i,p=0,q;
    cin>>n;
    q=n-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s1(a,p,q);
    while(p!=-1 && q!=-1 && p<q)
    {
        s2(a[p],a[q]);
        p=0;q=n-1;
        s1(a,p,q);
    }
    for(i=0;i<n;i++)
    {
        fout<<a[i]<<" ";
    }
    return 0;
}
