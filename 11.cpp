#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[21],b[]="aeiou";
    int i,n;
    cin.get(s,20);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(strchr(b,s[i])!=0)
        {
            s[i]=s[i]-32;
        }
    }
    cout<<s;
    return 0;
}
