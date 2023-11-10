#include<iostream>
using namespace std;
int main()
{
    int n=3,i,j,p;

    for(i=1;i<=n;i++)
    {
        p=n-i;
        while(p!=0)
        {
            cout<<" ";
            p--;
        }
        j=i;
        while(j)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        p=n-i;
        while(p!=0)
        {
            cout<<" ";
            p--;
        }
        j=i;
        while(j)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
    }

    return 0;
}
