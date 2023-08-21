///Raspuns: 34

#include<iostream>

using namespace std;

int a[101][101],n;



int main()
{
    int x,i,j,k;

    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            if(i%10==0 && j%10==9 && i==j-9)
            {
                a[i][j]=4;
                a[j][i]=4;
            }
            else
            {
                if(i+1==j)
                {
                   a[i][j]=1;
                   a[j][i]=1;
                }
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(k=0;k<100;k++)
    {
        for(i=0;i<100;i++)
        {
            for(j=0;j<100;j++)
            {
                if( ( a[i][j]>a[i][k]+a[k][j] && a[i][k]!=0 && a[k][j]!=0 ) || (a[i][j]==0 && a[i][k]!=0 && a[k][j]!=0) )
                {
                    a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
    }
    cout<<a[12][72];


    return 0;
}
