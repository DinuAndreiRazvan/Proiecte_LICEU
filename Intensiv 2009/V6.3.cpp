#include <iostream>

using namespace std;

int main()
{
    int n,a[100],i,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(n!=0)
    {
        s=0;
           for(i=0;i<n;i++)
        {
           s=s+a[i];
        }
        cout<<s<<"\n";
        n=n-1;
    }

    return 0;

}
