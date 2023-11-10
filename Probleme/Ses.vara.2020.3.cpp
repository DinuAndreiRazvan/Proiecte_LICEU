#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("Ses.vara.in");
int v[1000];

int main()
{
    int k=0,i,nr;
    while(fin>>nr)
    {
        v[nr]++;
    }
    for(i=1;i<=1000;i++)
    {
        if(v[i]%2==1)
        {
            k++;
        }
    }
    if(k<=1)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;

}
