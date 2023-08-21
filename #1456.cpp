#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[21],b[]="aeou";
    int i,n,ok=0;
    cin.get(s,20);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(strchr(b,s[i])!=0)
        {
            ok=1;
        }
    }
    if(ok==0)
    {
        cout<<"Da";
    }
    else
    {
        cout<<"Nu";
    }
    return 0;
}
