#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V10.in");
int v[9999];

int main()
{
    int n,a,b,nmax=0,i;
    while(fin>>n)
    {
        fin>>a>>b;
        v[n]=v[n]+a*b;
        if(n>nmax)
        {
            nmax=n;
        }
    }
    for(i=0;i<=nmax;i++)
    {
        if(v[i]!=0)
        {
            cout<<i<<" "<<v[i]<<"\n";
        }
    }
    return 0;

}
