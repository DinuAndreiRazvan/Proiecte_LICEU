#include <iostream>
using namespace std;
int main ()
{
    int n,c1,c2,s,d;
    cin>>n;
    c1=n%10;
    n=n/10;
    c2=n%10;
    if(c1==c2)
    {
        s=0;
    }
    if(c1>c2)
    {
        s=1;
    }
    else
    {
        s=-1;
    }
    do
    {
        c1=n%10;
        n=n/10;
        c2=n%10;
        d=c1-c2;

    }while((c1-c2)*s>=0);
    cout<<s<<" "<<n;
}
