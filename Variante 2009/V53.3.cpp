#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V53.3.in");

int cmmdc( int a , int b )
{
    if(a==b)return a;

    if(a<b)
    {
        return cmmdc(a,b-a);
    }
    else
    {
        return cmmdc(a-b,b);
    }
}

int main()
{
    int n,a,b,k=0;
    fin>>n>>a;
    while(fin>>b)
    {
        if(cmmdc(a,b)==1)
        {
            k++;
        }
        a=b;
    }
    cout<<k;

    return 0;
}
