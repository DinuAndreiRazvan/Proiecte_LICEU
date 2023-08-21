#include <iostream>

using namespace std;

int main()
{
    int nr,maxA=0;
    cin>>nr;
    while(nr!=0)
    {
        if(nr>maxA)
        {
            maxA=nr;
        }
        cin>>nr;
    }
    cout<<maxA;
    return 0;
}
