#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V19.S3.E3.in");

int main()
{
    int a,b;
    fin>>a;
    while(fin>>b)
    {
        if(a%2==0 && a!=b)
        {
            cout<<a<<" ";
        }
        a=b;
    }
    if(a%2==0)
    {
        cout<<a;
    }


    return 0;
}
