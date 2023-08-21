#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("Ses.speciala.2022.3.in");

int main()
{
    int x,y,a,contor=0,k,maxim=0;
    fin>>x;
    k=x-1;
    while(fin>>y)
    {
        if(x==y)
        {
            k--;
        }
        else
        {
            if(k==0)
            {
                contor=contor+x;
            }
            else
            {
                if(maxim<contor)
                {
                    maxim=contor;
                }
                contor=0;
            }
            k=y-1;
        }
        x=y;
    }

    if(k==0)
    {
        contor=contor+x;
    }

    if(maxim<contor)
    {
        maxim=contor;
    }

    cout<<maxim;

    return 0;
}
