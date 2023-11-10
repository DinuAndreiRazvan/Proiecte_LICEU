#include <iostream>

using namespace std;

int main()
{
    int n, v[20][20], ks, i, j, kd;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        ks = 0;
        kd = n-i-1;
        for(j = 0; j < n; j++)
        {
            if(i + j + 1 == n)
            {
                v[i][j] = 0;
            }
            else
            {
                if(i + j + 1 > n)
                {
                    ks++;
                    v[i][j] = ks;
                }
                else
                {
                    v[i][j] = kd;
                    kd--;
                }
            }
        }
    }


    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}


