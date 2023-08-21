#include<iostream>

using namespace std;
void nule(int a[100],int n)
{
    int i,j,ok,aux;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            ok=0;
            for(j=i;j<n;j++)
            {
                if(a[j]!=0)
                {
                    aux=a[i];
                    a[i]=a[j];
                    a[j]=aux;
                    ok=1;
                    break;
                }

            }
            if(ok==0)
            {
                break;
            }
        }
    }
}

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    nule(a,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
