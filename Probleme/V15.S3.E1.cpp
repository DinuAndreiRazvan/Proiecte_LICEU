#include<iostream>

using namespace std;
void divPrimMax(int n,int&p)
{
    while(p<=n)
    {
        if(n%p==0)
        {
            while(n%p==0)
            {
                n=n/p;
            }
        }
        p++;
    }
    p--;
}

int main()
{
    int n,p=2;
    cin>>n;
    divPrimMax(n,p);
    cout<<p;
    return 0;
}
