/// Raspuns: 3

/*

2022<45*45

*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int i,x,ok=0,s,j,a,b;
    x=2022;
    for(i=44;i>0;i--)
    {
        a=2022-i*i;
        b=sqrt(a);
        if(b*b==a)
        {
            cout<<2<<endl<<i<<" "<<b<<endl;
            break;
        }
    }

    for(i=44;i>0;i--)
    {
        for(j=44;j>0;j--)
        {
            a=2022-i*i-j*j;
            b=sqrt(a);
            if(b*b==a)
            {
                cout<<3<<endl<<i<<" "<<j<<" "<<b<<endl;
                break;
            }
        }
    }

    return 0;
}
