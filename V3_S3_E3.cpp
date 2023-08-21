#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("bac.in");

int main()
{
    int n, ok = 0, cnt1 = 0, cnt2 = 0, maxcnt = 0;

    while(fin>>n)
    {
        cnt1++;
        if(n < 0)
        {
            if(ok == 0)
            {
                ok = 1;
                cnt2++;
            }
            else
            {
                cnt2++;
                if(cnt1 > maxcnt)
                {
                    maxcnt = cnt1;
                }
            }
        }
        else
        {
            if(ok == 1)
                cnt2++;
        }
    }

    cout<<maxcnt<<" ";
    if(cnt2 > maxcnt)
    {
        maxcnt = cnt2;
        cout<<" * ";
    }

    cout<<maxcnt;

    return 0;
}


