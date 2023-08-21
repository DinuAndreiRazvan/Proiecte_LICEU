/*
3
1 3 4
5 6 3
9 3 5
*/
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int s[15][15],n,i,j,p1=1,p2=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>s[i][j];
            if(i+j+1<n)
            {
                p1=p1*s[i][j];
            }
            else
            {
                if(i+j+1>n)
                {
                    p2=p2*s[i][j];
                }
            }
        }
    }

    if(p1>p2)
    {
        cout<<p1;
    }
    else
    {
        cout<<p2;
    }

    return 0;
}
