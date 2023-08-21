#include<iostream>

using namespace std;

int main()
{
    int n,a[16][16],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j+1==n)
            {
                a[i][j]=0;
            }
            else
            {
                if(j>i && i+j+1<n)
                {
                    a[i][j]=1;
                }
                else
                {
                    if(j<i && i+j+1>n)
                    {
                        a[i][j]=2;
                    }
                    else
                    {
                        a[i][j]=3;
                    }
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;


}
