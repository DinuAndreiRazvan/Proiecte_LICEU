#include<iostream>

using namespace std;

int main()
{
    int x,y,k=0,i,a[10][10],j;
    cin>>x;
    y=x;
    while(y!=0)
    {
        y=y/10;
        k++;
    }
    for(i=1;i<=k;i++)
    {
        y=x;
        for(j=k;j>=1;j--)
        {
            a[i][j]=y%10;
            y=y/10;
        }
    }
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
