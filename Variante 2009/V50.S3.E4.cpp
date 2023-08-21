#include<iostream>
#include<fstream>

using namespace std;
ifstream fin ("V50.S3.E4.in");
ofstream fout ("V50.S3.E4.out");
int v[10000];

int main()
{
    int n,x,i,maxx=0;
    fin>>n;
    while(fin>>x)
    {
        v[x]++;
        if(maxx<x)
        {
            maxx=x;
        }

    }
    for(i=0;i<maxx;i++)
    {
        if(v[i]>=2)
        {
            fout<<i<<" ";
        }
    }
    return 0;
}
