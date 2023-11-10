#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,x=1,m=0,p=1,c,cn;
    cin>>n;
    do
    {
        cn=n;
        while(cn!=0)
        {
            c=cn%10;
            cn=cn/10;
            if(c==x)
            {
                m=c*p+m;
                p=p*10;
            }
        }
        x=x+2;
    }while(x<10);
    cout<<m;

    return 0;
}
