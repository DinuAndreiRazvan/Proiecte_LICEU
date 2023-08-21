#include<iostream>

using namespace std;

int main()
{
    int i,j;
    char a[9][9];
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            a[i][j]='=';
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            a[i][j]='>';
            if(i>j && i+j+1>7)
            {
                a[i][j]='<';
            }
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
