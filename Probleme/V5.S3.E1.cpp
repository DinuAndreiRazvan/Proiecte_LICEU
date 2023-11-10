#include <iostream>
#include <string.h>

using namespace std;

int baza(int n)
{
    int kmax=2;
    while(n!=0)
    {
        if(n!=0)
        {
            if(n%10>kmax)
            {
                kmax=n%10+1;
            }
            n=n/10;
        }
    }
    return kmax;
    return 0;

}

int main()
{
    int a;
    cin>>a;
    baza(a);
    cout<<baza(a);

    return 0;
}
