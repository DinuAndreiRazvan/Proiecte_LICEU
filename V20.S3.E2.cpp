#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101];
    int i,cnt;
    cin.get(s,100);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==',')
        {
            cnt=0;
            while(s[i]!=' ')
            {
                cnt++;
                i++;
            }
            strcpy(s+i-cnt,s+i);
            i=i-cnt;
        }
    }
    cout<<s;

}
