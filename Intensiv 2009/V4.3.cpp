#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V4.3.in");
int v[100];

int main()
{
    int n,ok=0,i;
    while(fin>>n)
    {
        if(n<100)
        {
            v[n]++;
            ok++;
        }
    }
    if(ok==0)
    {
        cout<<"NU EXISTA";
    }
    else
    {
          for(i=99;i>=0;i--)
        {
            if(v[i]!=0)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;

}
