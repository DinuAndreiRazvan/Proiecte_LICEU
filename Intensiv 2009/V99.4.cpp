#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V99.in");

int main()
{
    int a,b,k=0,v[1000],i=0,y,kmax=0;
    fin>>a;
    while(fin>>b)
    {
        v[i]=b;
        if(a%2!=b%2)
        {
            k++;
        }
        else
        {
            k=1;
        }
        if(k>kmax)
        {
            kmax=k;
            y=i;
        }
        a=b;
        i++;
    }
    cout<<kmax<<"\n";
    while(kmax!=0)
    {
        cout<<v[y-kmax+1]<<" ";
        kmax--;
    }


}
