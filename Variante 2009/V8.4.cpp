#include <iostream>

using namespace std;

int p1(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int p2(int n)
{
    return n/10;
}


int main()
{
    int n,s1,s2,k=0;
    cin>>n;
    while(n>9)
    {
        s1=p1(n);
        n=p2(n);
        s2=p1(n);
        if(s1==s2)
        {
            k++;
        }
    }
    cout <<k;
    return 0;

}
