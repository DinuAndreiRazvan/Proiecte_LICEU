#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V52.3.in");

int dist(int a)
{
    while(a>9)
    {
        if(a%2!=a/10%2)
        {
            return 0;
        }
        a=a/10;
    }
    return 1;
}

int main()
{
    int n,x,ok=-1;
    fin>>n;
    while(fin>>x)
    {
        if(dist(x)==1)
        {
            cout<<x<<" ";
            ok=0;
        }
    }
    if(ok==-1)
    {
        cout<<ok;
    }

    return 0;
}
