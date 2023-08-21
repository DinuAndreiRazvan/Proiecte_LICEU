#include <iostream>

using namespace std;
int cif(int a, int b)
{
    int k=0;
    while(a!=0)
    {
        if(a%10==b)
        {
            k++;
        }
        a=a/10;
    }
    return k;
}
int v[10];


int main()
{
    int n,i,k=0,ok=0,a=0,j=0;
    cin>>n;

    while(k<10)
    {
        v[k]=cif(n,k);
        k++;
    }
    for(i=0;i<10;i++)
    {
        if(v[i]!=0 && v[i]%2==1)
        {
            ok=1;
        }
    }
    if(ok==0)
    {
           for(i=0;i<10;i++)
        {
            if(v[i]!=0)
            {
               j=v[i]/2;
               while(j!=0)
               {
                   a=a*10+i;
                   j--;
                   v[i]--;
               }
            }
        }

        for(i=9;i>=0;i--)
        {
            if(v[i]!=0)
            {
               while(v[i]!=0)
               {
                   a=a*10+i;
                   v[i]--;
               }
            }
        }
        cout<<a;
    }
    else
    {
        cout<<a;
    }

    return 0;

}
