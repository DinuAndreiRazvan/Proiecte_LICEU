///Raspuns: 64

#include<iostream>

using namespace std;

int f(int n)
{
    if(n==1) return 1;
    else
        if(n%2==0)
        {
            return 1+f(n/2);
        }
        else
        {
            return 1+ f(3*n+1);
        }
}

int main()
{
    cout<<f(2022);

    return 0;
}
