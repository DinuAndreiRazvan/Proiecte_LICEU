#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j,ok,a[100][100],kmax;
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
        ok=0;
        kmax=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]>kmax && a[i][j]<21)
            {
                kmax=a[i][j];
                ok=1;
            }
        }
        if(ok==0)
        {
            cout<<"NU EXISTA"<<"\n";
        }
        else
        {
            cout<<kmax<<"\n";
        }
    }

}
