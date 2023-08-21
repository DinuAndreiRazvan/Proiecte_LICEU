#include <iostream>
using namespace std;

int a[100][100], viz[100], c[100], n, m, x;

int main()
{
    int i, j;
    cin >> n >> m >> x;
    while(m != 0)
    {
        cin >> i >> j;
        m--;
        a[i][j] = 1;
        a[j][i] = 1;
    }
    int p = 0, u = 0, nod;

    c[u] = x;
    u++;
    viz[x] = 1;

    while(p != u)
    {
        nod = c[p];
        p++;
        for(i = 1; i <= n; i++)
        {
            if(a[nod][i] == 1 && viz[i] == 0)
            {
                viz[i] = 1;
                c[u] = i;
                u++;
            }
        }
    }
    for(i = 0; i < u; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
