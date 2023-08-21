#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101];
    int i;
    cin.get(s,100);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i-1]=='<')
        {
            while(s[i]!='>')
            {
                if(s[i]!=' ')
                {
                   s[i]=s[i]-32;
                }
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}
