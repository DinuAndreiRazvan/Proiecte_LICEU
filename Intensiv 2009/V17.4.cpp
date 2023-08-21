#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V17.in");

int main()
{
    int n,a,b,k=0;
    fin>>n>>a;
    while(fin>>b)
    {
        if(b<a)
        {
           k++;
        }
    }
    cout<<k+1;

}
