#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("S6.in");

int main()
{
    int a,cnt1=0,cnt2=0,cntmax=0,ok;
    while(fin>>a)
    {
        if(a<0)
        {
            cnt1++;
            cnt2++;
            if(ok==0)
            {
                ok=1;
            }
            else
            {
                if(cntmax<cnt1)
                {
                    cntmax=cnt1;
                }
                cnt1=cnt2;
                cnt2=1;
            }
        }
        else
        {
            if(ok==1)
            {
               cnt1++;
               cnt2++;
            }
            else
            {
                cnt1++;
            }
        }
    }
    if(cnt2>cntmax)
    {
        cntmax=cnt2;
    }
    cout<<cntmax;
}
