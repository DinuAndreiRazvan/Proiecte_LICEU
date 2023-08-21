#include<iostream>
#include<fstream>

using namespace std;
ifstream fin1("V4_1.in");
ifstream fin2("V4_2.in");
static int f[100000];

int main()
{
    int a,b,i,j;
    static int v[100000],u[100000];
    fin1>>a;
    fin2>>b;
    for(i=0;i<a;i++)
    {
        fin1>>v[i];
        if(v[i]%5==0)
        {
            f[v[i]]++;
        }
    }
    for(i=0;i<b;i++)
    {
        fin2>>u[i];
        if(u[i]%5==0)
        {
            f[u[i]]++;
        }
    }
    for(i=0;i<100000;i=i+5)
    {
        if(f[i]==1)
        {
            cout<<i<<" ";
        }
    }


}
