
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101],aux;
    int i,cnt;
    cin.get(s,100);
    for(i=0;i<strlen(s);i++)
    {
        cnt=0;
        while(s[i]!=' ')
        {
            cnt++;
            i++;
        }
        if(cnt>=3)
        {
            i=i-cnt;
            aux=s[i];
            while(s[i+1]!=' ')
            {
                s[i]=s[i+1];
                i++;
            }
            s[i]=aux;
            i++;
        }
    }
    cout<<s;

}
