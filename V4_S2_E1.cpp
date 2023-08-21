#include<iostream>

using namespace std;
int main()
{
    int n,c1,c2;
    cin>>n;
    while(n>9)
    {
        c1=n%10;
        n=n/10;
        c2=n%10;
        if(c1>c2)
        {
            c2=c1;
            c1=n%10;
        }

        while(c1<c2)
        {
            cout<<c1<<" ";
            c2=c2/2;
        }
    }
    return 0;
}
