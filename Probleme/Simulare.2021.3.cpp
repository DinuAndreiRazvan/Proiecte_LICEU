#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("siMulare.2021.in");
int v[10];

int main()
{
    int n,s=0,p=0;
    while(fin>>n)
    {
        if(v[n]!=1)
        {
           p=p+10;
        }
        s=s+n*n;
        v[n]=1;
    }
    s=s+p;
    cout<<s;
    return 0;

}
