#include<iostream>

using namespace std;
int interval(int a[100],int  n)
{
    int k=0,aux,i;
    if(a[0]>a[n-1])
    {
        aux=a[0];
        a[0]=a[n-1];
        a[n-1]=aux;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[n-1] && a[i]>=a[0])
        {
            k++;
        }
    }
    return k;
}

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<interval(a,n);

}
