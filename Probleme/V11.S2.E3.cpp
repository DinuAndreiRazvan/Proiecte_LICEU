#include<iostream>

using namespace std;

int main()

{
    int i,j,p=1,a[7][7];
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==j)
            {
                p=p*a[i][j];
            }
        }
    }
    cout<<p<<" ";

    for(i=6;i>=0;i--)
    {
        for(j=6;j>=0;j--)
        {
            if(i==j && i!=0)
            {
                p=p/a[i][j];
                cout<<p<<" ";
            }
        }
    }



    return 0;

}
