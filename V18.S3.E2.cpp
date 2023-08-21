#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,i,k,j,ok,z;
    char s[20][20];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        char b[20];
        cin>>b;
        strcpy(s[i],b);
    }
    k=k-1;
    for(i=0;i<n;i++)
    {
        ok=0;
        z=strlen(s[k])-1;
        for(j=strlen(s[i])-1;j>=(strlen(s[i])-1-z);j--)
        {
            if(s[i][j]!=s[k][z])
            {
                ok=1;
            }
            z--;
        }
        if(ok==0 && i!=k)
        {
            cout<<s[i]<<endl;
        }
    }

    return 0;
}
