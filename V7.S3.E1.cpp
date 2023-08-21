#include <iostream>
#include <string.h>

using namespace std;

int putere(int n, int p)
{
    int k=0,d=2;
    while(n!=0)
    {
        if(n%p==0)
        {
            k++;
        }
        n=n/p;
    }
    return k;
    return 0;

}

int main()
{
    int a,b;
    cin>>a>>b;
    putere(a,b);
    cout<<putere(a,b);
    return 0;
}
