#include<iostream>
#include<fstream>

using namespace std;
ofstream fout("V8.3.out");

int main()
{
    int n,i=0,k;
    cin>>n;
    while(n!=0)
    {
       i=0;
       k=1;
       for(k=1;k<=n;k++)
       {
           fout<<i<<" ";
           i=i+2;
       }
       n=n-1;
       fout<<"\n";
    }
    return 0;
}
