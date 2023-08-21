#include <iostream>
#include <fstream>

using namespace std;
ifstream fin ("V2.3.in");
int v[9999];

int main()
{
    int n,i;
    while(fin>>n)
    {
        if(n>0)
        {
          v[n]++;
        }
    }
    for(i=1;i<=9999;i++)
    {
        if(v[i]!=0)
        {
            while(v[i]!=0)
            {
                cout<<i<<" ";
                v[i]=v[i]-1;
            }
        }
    }
    return 0;
}
