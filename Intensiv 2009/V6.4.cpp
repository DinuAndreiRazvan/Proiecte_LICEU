#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V6.4.in");

int main()
{
    int a,b,k=1;
    fin>>a;
    while(fin>>b)
    {
        if(a==b)
        {
            k=k+1;
        }
        else
        {
            cout<<a<<" ";
            cout<<k<<" ";
            k=1;
        }
        a=b;
    }
    cout<<a<<" ";
    cout<<k<<" ";
    return 0;
}
