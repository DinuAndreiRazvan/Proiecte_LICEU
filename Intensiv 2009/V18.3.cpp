#include<iostream>

using namespace std;
int countt(float a[100],int n)
{
    int  i,k=0;
    float x,y;
    for(i=0;i<n;i++)
    {
        x=x+a[i];
    }
    y=(float)x/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=y)
        {
            k++;
        }
    }
    return k;

}

int main()
{
    int n,i;
    cin>>n;
    float a[100];
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<countt(a,n);
    return 0;

}
