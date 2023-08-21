#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V3.3.in");
int v[10000];

int main()
{
    int a,ok=0,i;
    while(fin>>a)
    {
       if(a>99)
       {
           v[a]++;
           ok=1;
       }
    }

    if(ok==0)
    {
        cout<<"NU EXISTA";
    }
    else
    {
        for(i=99;i<10000;i++)
        {
            while(v[i]!=0)
            {
                cout<<i<<" ";
                v[i]--;
            }
        }
    }
    return 0;

}
