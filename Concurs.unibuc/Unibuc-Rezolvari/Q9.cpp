///Raspuns: 48

#include<iostream>

using namespace std;

int v[101];

int main()
{
    int n,i,aux,d,k=0,c;

    for(i=2;i<=100;i++)
    {
        aux=i;d=2;
        while(aux!=1)
        {
            c=0;
            while(aux%d==0)
            {
                aux=aux/d;
                c++;
            }
            v[d]=v[d]+c;
            d++;
        }
    }
    if(v[2]/2<v[3])
    {
        k=v[2]/2;
    }
    else
    {
        k=v[3];
    }
    cout<<k;

    return 0;
}
