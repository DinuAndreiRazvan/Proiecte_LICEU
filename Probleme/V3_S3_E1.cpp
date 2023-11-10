#include <iostream>

using namespace std;


int factori(int n, int m)
{
    int d = 2, aux, cnt=0;
    if(m > n)
    {
        aux = m;
        m = n;
        n = aux;
    }
    while(d<=m)
    {
        if(m%d == 0 && n%d == 0)
        {
            cnt ++;
            while(m % d == 0)
            {
                m = m / d;
            }
            while(n % d == 0)
            {
                n = n / d;
            }
        }
        d++;
    }
    return cnt;
}
int main()
{
    int n, m;

    cin >> n >> m;

    cout<<factori(n,m);

    return 0;
}

