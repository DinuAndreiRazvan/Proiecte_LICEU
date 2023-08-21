#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V1.in");
int v[100];

int main()
{
    int n,i,k=0;

    while(fin>>n)
    {
        if(n<100)
        {
            v[n]=1;
        }
    }
    for(i=99;i>=0;i--)
    {
        if(v[i]==0 && i%10!=i/10)
        {
            cout<<i<<" ";
            k++;
            if(k==2)
            {
                break;
            }
        }
    }
}
