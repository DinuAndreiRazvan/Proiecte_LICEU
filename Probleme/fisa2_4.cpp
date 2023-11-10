#include <iostream>

using namespace std;

int main()
{
    int n,d=1,k=0,c=0;
    cin>>n;
    while(d<=n)
    {
        if(n%d==0)
            {
                if(d%2==0)
                {
                    k++;
                }
                else
                {
                    c++;
                }
            }
       d++;
    }
    cout<<k<<" "<<c;
    return 0;
}
