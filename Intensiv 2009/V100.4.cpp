#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;
ifstream fin("V100.in");

int main()
{
    int x,k,s,i;
    fin>>x>>k>>s;
    if(k%2==0)
    {
        k=k/2-1;
    }
    else
    {
        k=k/2;
    }
    s=s/pow(10,k);
    cout<<s;

}
