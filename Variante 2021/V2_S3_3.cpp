#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V2.in");

int main()
{
    int a,cnt1,cnt2=0,cntmax=0,ok=0;
    while(fin>>a)
    {
        if(a>0)
        {
            if(ok==0)
            {
                cnt1=1;
                ok=1;
            }
            else
            {
                cnt1++;
            }
            cnt2++;
            if(cntmax<cnt2)
            {
                cntmax=cnt2;
            }

        }
        else
        {
            cnt2++;
            if(ok!=0)
            {
                cnt1++;
            }
        }
    }
    if(cnt1>cntmax)
    {
        cntmax=cnt1;
    }
    cout<<cntmax;

}
