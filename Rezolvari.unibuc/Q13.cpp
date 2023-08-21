#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n=1,i=0,dif,mini,k=0;
    dif=1864508;

    while(dif!=0)
    {
        mini=dif;
        n=1;
        while(abs(dif-n)<mini)
        {
            mini=abs(dif-n);
            n=n*2;
        }
        n=n/2;
        dif=mini;k++;
    }

    cout<<k;

    return 0;
}
