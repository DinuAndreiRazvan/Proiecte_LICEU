#include <iostream>
#include <math.h>

using namespace std;

void cifre(int&k)
{
    int i=0,c;
    k=k/10;
    c=k;
    while(c>9)
    {
        i++;
        c=c/10;
    }
    c=pow(10,i);
    k=k%c;
}

int main()
{
    int k;
    cin>>k;
    cifre(k);
    cout<<k;
}
