#include<iostream>

using namespace std;

long factorial_rec1(long n)
{
    if(n!=1)
    {
        n=n*factorial_rec1(n-1);
    }
    return n;
}

long factorial_rec2(long n)
{
    if(n==1)
    {
        return n;
    }
    return n*factorial_rec2(n-1);
}

int main()
{
    long n;
    n=5;
    cout<<factorial_rec2(n);
}
