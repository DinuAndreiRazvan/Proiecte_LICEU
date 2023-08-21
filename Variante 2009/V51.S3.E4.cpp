#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int E=0;
    int n,v[20],i,x,m;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>v[i];
    }
    cin>>x;
    for(i=0;i<=n;i++)
    {
        E=E+v[i]*pow(x,(n-i));
    }
    cout<<E;
    return 0;

}
