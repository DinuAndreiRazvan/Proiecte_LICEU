#include <iostream>

using namespace std;

int main()
{
    int nr1,nr2,ok=0;
    cin>>nr1>>nr2;
    while(nr2!=0)
    {
        if(nr1>=nr2)
        {
            ok=1;
        }
        nr1=nr2;
        cin>>nr2;
    }
    if(ok==0)
    {
        cout<<"sunt ord crescator";
    }
    else
    {
        cout<<"nu sunt";
    }
    return 0;
}
