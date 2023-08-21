#include<iostream>

using namespace std;

int main()
{
    int i,j,k,cnt=1,aux;
    int a[6][4],v[10];
    cin>>k;

    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j==k-1)
            {
                v[i]=a[i][j];
            }
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
            {
                if(v[i]%2==0 && v[j]%2==0 && v[i]<v[j])
                {
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j==k-1)
            {
                a[i][j]=v[i];
            }
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
