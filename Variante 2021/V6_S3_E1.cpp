#include<iostream>

using namespace std;

void numar(int n,int c,int&m)
{
    int p=1;
    while(n!=0)
    {
        if(n%10!=c)
        {
            m=m+n%10*p;
            p=p*10;
        }
        n=n/10;
    }
    if(p==1)
    {
        m=-1;
    }

}

int main()
{
    int n,c,m=0;
    cin>>n>>c;
    numar(n,c,m);
    cout<<m;

}
