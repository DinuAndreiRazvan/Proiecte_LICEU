#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V5.in");

int main()
{
    int n,i,kmax;
    fin>>n;
    fin>>kmax;
    cout<<kmax<<" ";
    while(fin>>i)
    {
        if(kmax<i)
        {
            kmax=i;
        }
        cout<<kmax<<" ";
    }

}
