#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[41],t[40];
    int i;
    cin.get(s,20);
    for(i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i])!=0)
        {
            strcpy(t,s+i+1);
            s[i+1]=s[i]-32;
            strcpy(s+i+2,t);
            i++;
        }
    }
    cout<<s;
    return 0;

}
