#include<iostream>

using namespace std;

int main()
{
    int a,b,d=1,c=0,k=0;
    cin>>a>>b;
    while(d<=a)
    {
        if(a%d==0&&d%2==1)
        {
            k++;
        }
        d++;
    }
    d=1;
    while(d<=b)
    {
        if(b%d==0&&d%2==1)
        {
            c++;
        }
        d++;
    }
    if(k>c)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    return 0;
}
