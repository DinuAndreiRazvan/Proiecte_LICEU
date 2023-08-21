#include<iostream>

using namespace std;
int divxy( int x , int y )
{
    if(x%y==0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a,b,n,aux,i;
    cin>>a>>b>>n;
    if(a>=b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    for(i=a;i<=b;i++)
    {
        if(divxy(n,i)==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
