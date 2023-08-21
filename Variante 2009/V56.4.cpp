#include<iostream>

using namespace std;

void numar(int x,int &nrp)
{
    int d,k;
    nrp=0;
    while(x)
    {
        d=2;
        k=0;
        while(d <= x/2)
        {
            if(x%d==0)
            {
                k++;
            }
            d++;
        }
        if(k==0)
        {
            nrp++;
        }
        x--;
    }

}

int main()
{
    int a,b,aux,x,y;
    cin>>a>>b;
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    numar(a,x);
    numar(b,y);
    if(y-x==0)
    {
        cout<<"NU";
    }
    else
    {
        cout<<"DA";
    }

    return 0;
}
