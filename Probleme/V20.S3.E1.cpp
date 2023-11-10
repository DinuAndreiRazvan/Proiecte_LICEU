#include <iostream>
#include <math.h>

using namespace std;
int transformareBaza10(int b,int n)
{
    int k=0,c,s=0;
    while(n!=0)
    {
        c=n%10;
        n=n/10;
        s=s+c*pow(b,k);
        k++;
    }
    return s;

}

int main()
{
    int n,b;
    cin>>b>>n;
    cout<<transformareBaza10(b,n);
    return 0;
}
