#include <iostream>
#include <math.h>

using namespace std;
int kpn(int a, int b, int k)
{
    int x=a,d,s=0;
    while(k!=0 && x<=b)
    {
       d=1;
       s=0;
       while(d<=x)
       {
           if(x%d==0)
           {
               s=s+d;
           }
           d++;
       }
       if(x%2==s%2)
        k--;
       x++;
    }
    if(x>b)
    {
        return -1;
    }
    else
    {
        return x-1;
    }
}

int main()
{
    int a,b,k;
    cin>>a>>b>>k;;
    cout<<kpn(a,b,k);
    return 0;
}
