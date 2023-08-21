#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V11.in");

int main()
{
    int n,i,maxim=0;
    fin>>n;
    while(fin>>n)
    {
        if(n>maxim)
        {
            maxim=n;
        }
        cout<<maxim<<" ";
    }

}
