#include <iostream>

using namespace std;

int main()
{
    int a,b,aux=0,d=1;
    cin>>a>>b;
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    while(d<=a)
    {
        if(a%d==0&&b%d==0)
        {
            cout<<d;
        }
        d++;
    }
    return o;

}
