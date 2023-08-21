#include<iostream>

using namespace std;

int main()
{
    int n,v[100],i,m,aux;
    cin>>n;
    m=n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    m--;
    while(m)
    {
        aux=v[0];
        for(i=0;i<n-1;i++)
        {
            v[i]=v[i+1];
        }
        v[n-1]=aux;
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        m--;
    }


    return 0;
}
