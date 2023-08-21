#include <iostream>

using namespace std;
int f(int a)
{
    int d=2;
    while(d<=a)
    {
        if(a%d==0)
            return d;
        d++;
    }
}

int main()
{
    int n,a,v[100],i=0,aux;
    while(n!=0)
    {
        cin>>a;
        if(f(a)==a)
        {
            v[i]=a;
            i++;
        }
        n--;
    }
    n=i;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;

}
