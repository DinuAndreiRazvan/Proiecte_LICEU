#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256];
    int i,n;
    cin.get(s,255);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if((i==0 || i==n-1)&& s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else
        {
            if(s[i]>='a' && s[i]<='z' && (s[i+1]==' ' || s[i-1]==' '))
            {
                s[i]=s[i]-32;
            }
        }
    }
    cout<<s;
    return 0;
}
