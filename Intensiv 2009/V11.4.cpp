#include<iostream>

using namespace std;
int sum(int x)
{
    int d=1,s=0;
    while(d<=x)
    {
        if(x%d==0)
        {
            s=s+d;
        }
        d++;
    }
    return s;

}

int main()
{
    int n,k=0,a;
    cin>>n;
    while(n!=0)
    {
        cin>>a;
        if(sum(a)==a+1)
        {
            k++;
        }
        n--;
    }
    cout<<k;
    return 0;

}
