#include <iostream>

using namespace std;

int main()
{
    int n,i=1,nr=0,y,x,j,r;
    cin>>n;
    do
    {
        x=0;
        y=1;
        j=1;
        while(j<i)
        {
            r=2*x-y;
            x=y;
            y=r;
            j++;
        }
        i++;
        if(y>0)
        {
            nr++;
        }
    }while(i<=n);
    cout<<nr;

    return 0;

}
