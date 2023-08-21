#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V16.in");
int v[10];

int main()
{
    int n,i;
    while(fin>>n)
    {
        while(n!=0)
        {
            v[n%10]++;
            n=n/10;
        }
    }
    for(i=9;i>=0;i--)
    {
        while(v[i]!=0)
        {
            cout<<i;
            v[i]=v[i]-1;
        }
    }
    return 0;


}
