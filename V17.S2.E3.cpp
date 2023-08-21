
#include <iostream>

using namespace std;

int main()
{
    int j,i,a[4][5];

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=3;i>=0;i--)
    {
        for(j=4;j>=0;j--)
        {
            if(j==4)
            {
                a[i][j]=4-i;
            }
            else
            {
                a[i][j]=a[i][j+1]+4;
            }
        }
    }
        for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}
