#include<iostream>
#include <math.h>

using namespace std;

void generatoare(int n)
{
    int b , a2, a1;
    for(b = n/2; b >= 1; b--)
    {
        a1 = n / ((b *b + 1)/b);
        a2 = n / ((float)(b *b + 1)/b);
        if((a1*b + a1/b) == n && a1%2 == 0)
        {
            cout<<a1<<"-"<<b<<" ";
        }
        else
        {
            if((a2*b + a2/b) == n && a2%2 == 0)
            {
                cout<<a2<<"-"<<b<<" ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    generatoare(n);
    return 0;
}
