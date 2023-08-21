#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V3.3.in");
int v[9999];

int main()
{
    int n,ok=0,i;
    while(fin>>n)
    {
        if(n>99)
        {
            v[n]++;
            ok=1;
        }
    }
    if(ok==1)
    {
        for(i=100;i<=9999;i++)
        {
            while(v[i]!=0)
            {
                cout<<i<<" ";
                v[i]--;
            }
        }
    }
    else
    {
        cout<<"NU EXISTA";
    }
    return 0;
}
