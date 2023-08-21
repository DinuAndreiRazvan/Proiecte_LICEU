#include<iostream>

using namespace std;
int i_prim(int n)
{
    int d=2,a,b,p=0;
    a=n;
    while(a!=0)
    {
        d=2;
        p=0;
        while(d<=a/2)
        {
            if(a%d==0)
            {
                p++;
            }
            d++;
        }
        if(p==0)
        {
            break;
        }
        a--;
    }
    b=n;
     while(b!=0)
    {
        d=2;
        p=0;
        while(d<b/2)
        {
            if(b%d==0)
            {
                p++;
            }
            d++;
        }
        if(p==0)
        {
            break;
        }
        b++;
    }
    return b-a;
}

int main()
{
    int n;
    cin>>n;
    cout<<i_prim(n);

}
