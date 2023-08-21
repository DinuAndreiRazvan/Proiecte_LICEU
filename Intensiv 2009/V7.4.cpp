#include<iostream>

using namespace std;
int sub(int n)
{
    int x=0;
    while(x<=n)
    {
        if(x<5)
        {
            x++;
        }
        else
        {
            x=2*x;
        }
    }
    if(x<=5)
    {
        x=x-1;
    }
    else
    {
        x=x/2;
    }
    return x;
}

int main()
{
    int s,a;
    cin>>s;
    while(s!=0)
    {
        a=sub(s);
        cout<<a<<" ";
        s=s-a;
    }
    return 0;
}
