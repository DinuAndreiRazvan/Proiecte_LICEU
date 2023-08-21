#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101],b[]="aeiou";
    int i,n,k=0;
    cin.get(s,100);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]<='9' && s[i]>='0')
        {
            if(s[i+1]!=',')
            {
               k=k+1;
            }

        }

    }
    cout<<k;

    return 0;
}
