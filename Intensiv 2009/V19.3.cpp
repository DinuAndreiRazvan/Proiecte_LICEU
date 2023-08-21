#include<iostream>

using namespace std;
void aranjare(float a[100],int n)
{
    int i,j;
    float aux;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
           {
               aux=a[j];
               a[j]=a[j+1];
               a[j+1]=aux;
           }
        }
    }
}

int main()
{
    int n,j;
    float a[100];
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    aranjare(a,n);
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }



}
