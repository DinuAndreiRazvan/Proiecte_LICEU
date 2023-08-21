#include<iostream>
#include<math.h>

using namespace std;

int c[101];

int main()
{
    int n,i,a[101],b[101],x,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            x=b[i];
            k=0;
            while(x)
            {
                k++;
                x=x/10;
            }
            c[i]=a[i]*pow(10,k)+b[i];
        }
        else
        {
            x=a[i];
            k=0;
            while(x)
            {
                k++;
                x=x/10;
            }
            c[i]=b[i]*pow(10,k)+a[i];
        }
        cout<<c[i]<<" ";
    }



    return 0;
}
