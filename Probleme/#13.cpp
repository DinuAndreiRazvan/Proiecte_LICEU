#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[11],x[11];
    int i,n,j;
    cin.get(s,10);
    n=strlen(s);
    cout<<s;
    for(i=n-1;i>=0;i--)
    {
        cout<<"\n";
        for(j=0;j<i;j++)
            cout<<s[j];
    }

    for(i=0;i<n;i++)
    {
        cout<<s+i<<"\n";
    }
    return 0;
}
