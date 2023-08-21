#include <iostream>
#include <string.h>

using namespace std;
    char s[256],t[256],b[]="aeiou";
    int i;

int main()
{

    cin.get(s,255);

    for(i = 0; i < strlen(s); i++)
    {
        if(strchr(b,s[i]) != 0)
        {
              strncpy(t,s,i+1);
           strcpy(s,s+i+1);
           strcat(t,"pa");
           strcat(t,s);
           strcpy(s,t);
           i=i+3;
        }
    }
    cout<<s;
    return 0;
}
