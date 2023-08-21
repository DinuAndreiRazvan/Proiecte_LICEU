#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, j;
    char a[10][10];
    for(i = 0; i < 6 ; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if((j >= i && i + j + 1 <= 6) || (j <= i && i + j + 1 >= 6))
            {
                if(j < 3)
                {
                    a[i][j] = '(';
                }
                else
                {
                    a[i][j]=')';
                }
            }
            else
            {
                a[i][j]='*';
            }

        }
    }

    for(i = 0; i < 6 ; i++)
    {
        for(j = 0; j < 6; j++)
        {
            cout << a[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}
