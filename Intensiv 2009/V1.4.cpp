#include<iostream>

using namespace std;
int sub(int v[100] , int n , int a)
{
    int k=0,i;
    for(i=0;i<n;i++)
    {
        if(v[i]<a)
        {
            k++;
        }
    }
    return k;
}

int main()
{
    int v[100],a[100],i,n,k,ok=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<=99;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
      k=sub(v,n,v[i]);
      a[k]++;
    }
    for(i=0;i<=99;i++)
    {
        if(a[i]>=2)
        {
            ok=1;
        }
    }
    if(ok==0)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;





}
