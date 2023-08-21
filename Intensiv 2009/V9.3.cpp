#include<iostream>

using namespace std;
void sub(int n , int k)
{
    int m,i;
    m=k*n;
    while(n!=0)
    {
        cout<<m<<" ";
        m=m-5;
        n--;
    }
}

int main ()
{
    int n,k;
    cin>>n>>k;
    sub(n,k);
    return 0;
}
