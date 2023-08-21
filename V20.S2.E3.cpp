#include<iostream>

using namespace std;

int main()
{
    int i,j;
    char a[7][7];
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]='*';
        }
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            a[i][j]='a';
            if(i>=j && i+j+1<=7)
            {
                a[i][j]='b';
            }
            if(i<=j && i+j+1>=7)
            {
                a[i][j]='b';
            }
        }
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
