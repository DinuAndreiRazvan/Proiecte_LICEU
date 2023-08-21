#include<iostream>

using namespace std;

int main()
{
    int a[100][100],n,i,j;

    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j+1==n)
            {
                a[i][j]==0;
            }
            else
            {
                if(i<j && i+j+1<n)
                {
                    a[i][j]=1;
                }
                else
                {
                    if(i>j && i+j+1<n)
                    {
                        a[i][j]=2;
                    }
                    else
                    {
                        if(i<j && i+j+1>n)
                        {
                            a[i][j]=3;
                        }
                        else
                        {
                            if(i>j && i+j+1>n)
                            {
                                a[i][j]=4;
                            }
                        }
                    }
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
