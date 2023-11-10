#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[101];
    int i;
    cin.get(s,100);
    for(i=strlen(s)-1;i>=0;i--)
    {
       if(strchr("aeiou",s[i])!=0)
       {
           strcpy(s+i,s+i+1);
           break;
       }
    }
    cout<<s;

    return 0;

}
