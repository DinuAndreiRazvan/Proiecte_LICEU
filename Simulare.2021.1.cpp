#include <iostream>

using namespace std;

int putere(long n)
{
    int d=2,k,kmin=10000,dmin;
    dmin=n;
    while(d<=n)
    {
        if(n%d==0)
        {
            k=0;
            while(n%d==0)
            {
                k++;
                n=n/d;
            }
            if(k<kmin)
            {
                kmin=k;
                dmin=d;
            }
        }
        d++;
    }
    return dmin;

}

int main()
{
    int n;
    cin>>n;
    cout<<putere(n);
    return 0;
}
