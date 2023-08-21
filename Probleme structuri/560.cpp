/*
5
13
108
6
24
56
*/
#include<iostream>

using namespace std;

struct numar_div
{
    int nr;
    int div;
};

int main()
{
    int n,i,d,k,j;
    cin>>n;
    numar_div a[100],aux;
    for(i=0;i<n;i++)
    {
        cin>>a[i].nr;
        d=2;
        k=0;
        while(d<=a[i].nr/2)
        {
            if(a[i].nr%d==0)
            {
                k++;
            }
            d++;
        }
        a[i].div=k;
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i].div<a[j].div)
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i].nr<<" "<<a[i].div<<endl;
    }

    return 0;
}
