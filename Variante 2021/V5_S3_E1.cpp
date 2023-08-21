#include<iostream>

using namespace std;
int identice(int n)
{
    int k=1;
    while(n>9)
    {
        if(n%10!=n/10%10)
        {
            k=0;
        }
        n=n/10;
    }
    return k;
}

int main()
{
    int n;
    cin>>n;
    cout<<identice(n);

}
