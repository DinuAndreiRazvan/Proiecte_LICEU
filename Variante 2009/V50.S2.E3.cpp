#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    char s[21],b[]="aeiou";
    int i,ok=0,x;
    cin.get(s,20);
    for(i=0;i<strlen(s);i++)
    {
        if(strchr(b,s[i])!=0 && ok==0)
        {
            strcpy(s+i,s+i+1);
            i=strlen(s);
            ok=1;
        }
    }
    strrev(s);
    ok=0;
    for(i=0;i<strlen(s);i++)
    {
        if(strchr(b,s[i])!=0 && ok==0)
        {
            strcpy(s+i,s+i+1);
            i=strlen(s);
            ok=1;
        }
    }
    strrev(s);
    cout<<s;
    return 0;

}
