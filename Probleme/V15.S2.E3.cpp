#include<iostream>

using namespace std;

int main()
{
    int v[4][5],i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            v[i][j]=0;
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0)
            {
                v[i][j]=i+1;
            }
            else
            {
                v[i][j]=v[i][j-1]+4;
            }

        }
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
