#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256],c;
    int i;
    cin.get(s,255);
    for(i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i])==0)
        {
            c=s[i];
        }
    }
    cout<<c;
    return 0;

}
