#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V15.in");

int main()
{
    int n,a=0,b=0;
    while(fin>>n)
    {
        if(n%2==1)
        {
            a=b;
            b=n;
        }
    }
    if(a!=0 && b!=0)
    {
        cout<<a<<" "<<b;
    }
    else
    {
        cout<<"Numere insuficiente";
    }
    return 0;
}
