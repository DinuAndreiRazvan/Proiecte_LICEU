#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("6.in");
ofstream fout("6.out");

void construire(int v[100],int&n)
{
    int a,i=0;
    while(fin>>a)
    {
        if(a<1000 && a>99)
        {
            v[i]=a;
            i++;
        }
    }
    n=i;
}

int cautare(int v[100],int n,int x)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(v[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,v[100],x;
    construire(v,n);
    cin>>x;
    if(cautare(v,n,x)==-1)
    {
        fout<<"nu exista";
    }
    else
    {
        fout<<cautare(v,n,x);
    }
    return 0;
}
