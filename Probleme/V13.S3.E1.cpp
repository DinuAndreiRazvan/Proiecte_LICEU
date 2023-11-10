#include<iostream>
#include<math.h>

using namespace std;
void putere(int n,int&p,int&d)
{
    int pmin=1000,ds=2,ps=0;
    while(ds<=n/2)
    {
        if(n%ds==0)
        {
            ps=0;
            while(n%ds==0)
            {
                n=n/ds;
                ps++;
            }
            if(ps<p)
            {
                p=ps;
                d=ds;
            }
        }
        ds++;
    }
}

int main()

{
    int d=0,n,p=999999;
    cin>>n;
    putere(n,p,d);
    cout<<d<<" "<<p;


    return 0;

}
