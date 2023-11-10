#include <iostream>

using namespace std;
int maxim(int n)
{
    int k=-1;
    while(n!=0)
    {
        if(n%10%2==1 && n%10>k)
        {
            k=n%10;
        }
        n=n/10;
    }
    return k;
}

int main()
{
    int n;
    cin>>n;
    cout<<maxim(n);
    return 0;
}
