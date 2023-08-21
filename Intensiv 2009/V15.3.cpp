#include<iostream>

using namespace std;

int main()
{
    int n,i,k,a,d,kmax=0;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        d=1;
        k=0;
        while(d<=i)
        {
            if(i%d==0)
            {
                k++;
            }
            d++;
        }
        if(k>=kmax)
        {
            kmax=k;
            a=i;
        }
    }
    cout<<a;
}
