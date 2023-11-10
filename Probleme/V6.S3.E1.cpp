#include <iostream>
#include <string.h>

using namespace std;

void prodprim(int n, int&p)
{
    int d=2;
    while(d<=n/2)
    {
        if(n%d==0)
        {
            p=p*d;
             while(n%d==0)
               {
                    n=n/d;
               }
        }

        d++;
    }

}

int main()
{
    int a,b=1;
    cin>>a;
    prodprim(a,b);
    cout<<b;
    return 0;
}
