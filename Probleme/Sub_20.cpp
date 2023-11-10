#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");

struct fractie
{
   int x,y;
};

int cmmdc(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
fractie suma(fractie f, fractie g)
{
   fractie s;
   s.x=0;
   s.y=1;
   s.x=f.x*g.y+f.y*g.x;
   s.y=f.y*g.y;
   return s;
}


int main()
{
    fractie v[100],s;
    s.x=0;
    s.y=1;
    int  n,i,p;
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>v[i].x>>v[i].y;
        if(cmmdc(v[i].x,v[i].y)==1)
        {
           s=suma(s,v[i]);
        }
    }
    p=cmmdc(s.x,s.y);
    s.x=s.x/p;
    s.y=s.y/p;
    fout<<s.x<<"/"<<s.y<<"\n";
    for(i=0;i<n;i++)
    {
        if(cmmdc(v[i].x,v[i].y)==1)
        {
           fout<<v[i].x<<"/"<<v[i].y<<"\n";
        }
    }
    return 0;
}
