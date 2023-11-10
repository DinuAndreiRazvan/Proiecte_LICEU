#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("V5_S3_E3.in");

int main()
{
    int a, b, minim = 0, smax = 0, s = 0;

    fin >> a;

    if(a>0)
        s += a;

    while(fin>>b)
    {
        if(b<0)
        {
            if(b<minim)
            {
                minim = b;
                if(s > smax)
                {
                    smax = s;
                    s = 0;
                }
            }

        }
        else
        {
            if(a < 0 && (-1)*a < b && s != 0)
            {
                s += a;
                s += b;
            }
            else
            {
                s += b;
            }
        }
        a = b;
    }

    cout<<smax;
    return 0;
}
