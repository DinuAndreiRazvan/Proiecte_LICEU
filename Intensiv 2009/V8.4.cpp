#include<iostream>

using namespace std;
void sub(int n,int m,int a[100],int b[100])
{
    int i=0,j=0,x;
    if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            x=a[i];
            i++;
        }
        else
        {
            cout<<b[j]<<" ";
            x=b[j];
            j++;
        }
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            if(x%2!=a[i]%2)
            {
               cout<<a[i]<<" ";
               x=a[i];
               i++;
            }
            else
            {
               cout<<b[j]<<" ";
               x=b[j];
               j++;
            }
        }
        else
        {
           if(x%2!=b[j]%2)
            {
               cout<<b[j]<<" ";
               x=b[j];
               j++;
            }
            else
            {
               cout<<a[i]<<" ";
               x=a[i];
               i++;
            }
        }
    }
    if(i==n)
    {
        if(x%2!=b[j]%2)
        {
            while(j!=m)
            {
                if(b[j]>x)
                {
                   cout<<b[j];
                   j=m-1;
                }
                j++;
            }
        }
    }
    else
    {
      if(x%2!=a[i]%2)
        {
            while(i!=n)
            {
                if(a[i]>x)
                {
                   cout<<a[i];
                   i=n-1;
                }
                i++;
            }
        }
    }
}

int main()
{
    int n,m,a[100],b[100],i;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sub(n,m,a,b);
    return 0;
}
