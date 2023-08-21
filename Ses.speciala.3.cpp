#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
ifstream fin("ses.speciala.in");

int main()
{
    int a,b,c,nr=0,minv,dif;
    fin>>a>>b;
    while(fin>>c)
    {
        if(a<b && b>c)
        {
            dif=abs(a-c);
            if(minv>dif)
            {
                minv=dif;
                nr=b;
            }
            else
            {
                if(minv==dif)
                {
                     if(nr<b)
                    {
                        nr=b;
                    }
                }
            }

        }
        a=b;
        b=c;
    }
    cout<<nr;
    return 0;
}
