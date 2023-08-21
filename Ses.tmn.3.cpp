#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
ifstream fin("ses.toamna.in");

int main()
{
    int a,mina=100,maxa=9;
    while(fin>>a)
    {
        if(a<100 && a>9)
        {
            if(a<mina)
            {
                mina=a;
                if(maxa<a)
                {
                    maxa=a;
                }
            }
            else
            {
                if(maxa<a)
                {
                    maxa=a;
                }
            }
        }
    }
    cout<<mina-1<<" "<<maxa+1;
    return 0;
}
