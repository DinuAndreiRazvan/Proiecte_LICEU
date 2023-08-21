#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V17.S3.E3.in");
int v[10000];

int main()
{
    int n,i,k=0,c=0,a,b;
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>a;
        v[a]++;
    }
    while(fin>>a>>b)
    {
        k=0;
        for(i=a;i<=b;i++)
        {
            if(v[i]!=0)
            {
                k++;
            }
        }
        if(k==0)
        {
            c++;
        }
    }
    cout<<c;

    return 0;
}
