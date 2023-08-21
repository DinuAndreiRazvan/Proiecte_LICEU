#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V55.in");

void cifre(int a, int&b)
{
    int v[10],i=0,j,n,p=1,ok=0,aux;
    b=0;
    while(a)
    {
        v[i]=a%10;
        a=a/10;
        i++;
    }
    n=i;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(v[i]>v[j])
            {
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        b=b*10+v[i];
        p=p*10;
        if(v[i]!=0 && ok==0)
        {
            b=b/10;
            p=p/10;
            ok=1;
            b=b+v[i]*p;
        }
    }

}

int main()
{
    int a,b,n;
    fin>>n;
    while(fin>>a)
    {
        cifre(a,b);
        if(a==b)
        {
            cout<<a<<" ";
        }
    }



    return 0;
}
