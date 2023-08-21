#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;
ifstream fin("V8.3.in");

int main()
{
    int s=0,n,i,v[50],a;
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        a=sqrt(v[i]);
        if(a*a==v[i])
        {
            s=s+v[i];
            cout<<v[i]<<"+";
        }
    }
    cout<<"\b="<<s;
    return 0;
}
