#include <iostream>
#include <math.h>

using namespace std;
int suma(int a,int b)
{
    int s=0,d=1;
    while(d<=a)
    {
        if(a%d==0 && b%d==0)
        {
            s=s+d;
        }
        d++;
    }
    return s;

}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<suma(a,b);
    return 0;
}
