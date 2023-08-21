#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V9.in");
int v[1000];

int main()
{
    int n,a=2;
    while(fin>>n)
    {
        if(n<1000)
        {
           v[n]++;
        }
    }
    n=999;
    while(a!=0)
    {
       if(v[n]==0)
       {
           cout<<n<<" ";
           a--;
       }
       n--;
    }
    return 0;

}
