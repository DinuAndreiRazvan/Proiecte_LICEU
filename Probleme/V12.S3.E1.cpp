#include<iostream>
#include<math.h>

using namespace std;
int pDoi(int n)
{
    int d=2;
    while(d*2<=n)
    {
        d=d*2;
    }
    return d;
}

int main()

{
    int d;
    cin>>d;
    cout<<pDoi(d);


    return 0;

}
