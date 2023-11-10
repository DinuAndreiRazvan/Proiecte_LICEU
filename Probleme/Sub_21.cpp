#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");

struct complexi
{
    float a,b;
};

float modul(complexi x)
{
    return sqrt(x.a*x.a+x.b*x.b);
}

complexi suma(complexi x,complexi y)
{
    complexi p;
    p.a=x.a+y.a;
    p.b=x.b+y.b;
    return p;
}

int main()
{
    int n,i;
    fin>>n;
    float s;
    complexi r[25],p;
    p.a=0;
    p.b=0;
    for(i=0;i<n;i++)
    {
        fin>>r[i].a>>r[i].b;
        s=modul(r[i]);
        if(s==(int) s)
        {
            p=suma(r[i],p);
        }
    }
    fout<<p.a<<" "<<p.b;

    return 0;
}
