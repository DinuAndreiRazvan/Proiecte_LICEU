#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("5.in");
ofstream fout("5.out");

void citeste(float v[100],int&n)
{
    int i=0;
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>v[i];
    }
}

int pozmax(float v[100],int p1,int p2)
{
    int i,aux,pmax=0,nrmax=0;
    if(p1>p2)
    {
        aux=p1;
        p1=p2;
        p2=aux;
    }
    for(i=p1;i<=p2;i++)
    {
        if(v[i]>nrmax)
        {
            nrmax=v[i];
            pmax=i;
        }
    }
    return pmax;
}

int main()
{
    int n,i,p1,p2;
    float v[100],aux;
    citeste(v,n);
    for(i=0;i<n-1;i++)
    {
        aux=v[i];
        v[i]=v[pozmax(v,i,n)];
        v[pozmax(v,i,n)]=aux;
    }
    for(i=0;i<n;i++)
    {
        fout<<v[i]<<"   ";
    }

    return 0;
}
