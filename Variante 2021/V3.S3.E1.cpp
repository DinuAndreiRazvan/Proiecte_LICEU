#include<iostream>

using namespace std;
int suma(int n)
{
    int d=1,i,k,s=0;
    while(d<=n)
    {
        if(n%d==0)
        {
            i=2;
            k=0;
            while(i<=d/2)
            {
               if(d%i==0)
               {
                   k=1;
               }
               i++;
            }
            if(k==1 || d==1)
            {
                s=s+d;
            }
        }
        d++;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<<suma(n);
}
