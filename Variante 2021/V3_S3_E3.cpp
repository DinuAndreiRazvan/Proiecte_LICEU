#include <iostream>
#include<fstream>

using namespace std;
ifstream fin("V3.in");
int v[10],a[10];

int main()
{
    int n,k=0,i,kmax=0;
    while(fin>>n)
    {
        k++;
        v[n/10%10]++;
        a[n/10%10]=k;
    }
    for(i=0;i<10;i++)
    {
        if(kmax<v[i])
        {
            kmax=v[i];
        }
    }
    for(i=0;i<10;i++)
    {
        if(v[i]==kmax)
        {
            cout<<a[i]<<" ";
        }
    }

}
