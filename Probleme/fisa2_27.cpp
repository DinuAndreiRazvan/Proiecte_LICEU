#include <iostream>

using namespace std;

int main()
{
    int nr1,nr2,d=0,maxd=0;
    cin>>nr1>>nr2;
    while(nr2!=0)
    {
        if(nr1>nr2)
        {
            d=nr1-nr2;
        }
        else
        {
            d=nr2-nr1;
        }
        if(d>maxd)
            maxd=d;
        nr1=nr2;
        cin>>nr2;

    }
    cout<<maxd;
    return 0;
}
