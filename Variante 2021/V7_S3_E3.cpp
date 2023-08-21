#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V7.in");
int v[10];

int main()
{
    int n,i;
    while(fin>>n)
    {
        v[n]++;
    }
    for(i=0;i<10;i=i+2)
    {
        while(v[i]!=0)
        {
            cout<<i<<" ";
            v[i]--;
        }
    }
}
