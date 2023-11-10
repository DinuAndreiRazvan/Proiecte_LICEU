#include <iostream>
#include <math.h>

using namespace std;
int multiplu(int n)
{
    int ok=0,k=n,z;
    while(ok!=1)
    {
        z=sqrt(k);
        if(z*z==k)
        {
            ok=1;
        }
        k=k+n;
    }
    return k-n;

}

int main()
{
    int n;
    cin>>n;
    cout<<multiplu(n);
    return 0;
}
