#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");
int cifra(char c)
{
    if(c<='9' && c>='0')
    {
        return 1;
    }
    else return 0;
}
void numar(int&n,int cif)
{
    n=n*10+cif;
}

int v[10];

int main()
{
    char c;
    int p=0,i=0;
    while(fin>>c)
    {
        if(cifra(c)==1)
        {
            v[(int)c-48]=1;
        }

    }
    for(i=1;i<10;i=i+2)
    {
        if(v[i]>0)
        {
           numar(p,i);
        }
    }
    for(i=8;i>=0;i=i-2)
    {
        if(v[i]>0)
        {
            numar(p,i);
        }
    }
    fout<<p;

    return 0;
}
