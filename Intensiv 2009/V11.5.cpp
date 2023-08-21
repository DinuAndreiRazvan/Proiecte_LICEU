#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j,minim,maxim=0,a[10][10];
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        minim=9999;
        for(j=0;j<n;j++)
        {
            if(a[i][j]<minim)
            {
                minim=a[i][j];
            }
        }
        if(minim>maxim)
            {
                maxim=minim;
            }
    }
    cout<<maxim;
    return 0;

}
