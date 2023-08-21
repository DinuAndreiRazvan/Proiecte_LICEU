#include<iostream>
#include<fstream>

using namespace std;
ifstream fin ("V51.S3.E3.in");

int divizor(int a)
{
    int d=2;
    while(a%d!=0)
    {
        d++;
    }
    return d;
}

int main()
{
    int n,x,s=0,a;
    fin>>n;
    while(fin>>x)
    {
        a=divizor(x);
        s=s+a;
    }
    cout<<s;

    return 0;
}
