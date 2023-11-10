#include<iostream>
#include<math.h>

using namespace std;
int sum_binare(int n)
{
    int s=0;
    while(n)
    {
        s=s+n%2;
        n=n/2;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_binare(n);

}
