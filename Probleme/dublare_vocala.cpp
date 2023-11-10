#include <iostream>
#include <string.h>

using namespace std;
char s[256],t[256],b[]="aeiou";
    int i,n;

int main()
{

    cin.get(s,255);
    n=strlen(s);
    for(i = 0 ; i < strlen(s) ; i++)
    {
        if(strchr(b,s[i]) != 0)
        {
           strncpy(t,s,i+1);
           strcpy(s,s+i);
           strcat(t,s);
           strcpy(s,t);
           i++;
        }
    }
    cout<<s;
    return 0;
}
