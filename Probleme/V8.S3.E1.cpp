#include <iostream>

using namespace std;
int suma(int n)
{
    int d=2,s=0;
    while(n>=d)
    {
        if(n%d==0)
        {
            s=s+d;
            while(n%d==0)
            {
                n=n/d;
            }
        }
        d++;
    }
    return s;

}

int main()
{
    int a;
    cin>>a;

    cout<<suma(a);

    return 0;
}
