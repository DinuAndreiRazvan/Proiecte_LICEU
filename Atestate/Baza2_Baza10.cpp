#include<iostream>
#include<math.h>

using namespace std;

int baza2_baza10(int n)
{
    int k=0,m=0,l;
    while(n)
    {
        l=pow(2,k);
        m=m+l*(n%10);
        k++;
        n=n/10;
    }
    return m;
}

int baza10_baza2(int n)
{
    int m=0,p=1;
    while(n)
    {
        m=m+p*(m%2);
        p=p*10;
        n=n/10;
    }
    return m;
}

int main()
{
    int n,k=0,m=0,l;
    cin>>n;
    while(n)
    {
        l=pow(2,k);
        m=m+l*(n%10);
        k++;
        n=n/10;
    }
    cout<<m;
}
