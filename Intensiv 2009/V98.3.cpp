#include <iostream>
#include <math.h>

using namespace std;

int numar(int x,int y)
{
    int z=1,k=1;
    while(z<y)
    {
        z=pow(x,k);
        k++;
    }
    z=pow(x,k-2);
    return z;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<numar(x,y);
}
