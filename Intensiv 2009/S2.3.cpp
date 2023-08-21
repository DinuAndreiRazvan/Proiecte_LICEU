#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V2.3.in");

int main()
{
    int v[100],n,ok=0,i=0,j,aux;
    while(fin>>n)
    {
        if(n>0)
        {
            v[i]=n;
            i++;
            ok=1;
        }
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
    if(ok==1)
    {
           for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
    }
    else
    {
        cout<<"NU EXISTA";
    }

    return 0;
}
