#include<iostream>

using namespace std;

int main()
{
    int i,j;
    char v[7][7];

    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            v[i][j]='+';
        }
    }

    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==j)
            {
                v[i][j]='a';
            }
            else
            {
                if(i<j)
                {
                    v[i][j]=v[i][j-1]+1;
                }
            }
        }
    }


    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
