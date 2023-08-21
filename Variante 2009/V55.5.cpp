#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[101];
    int i;
    cin.get(s,100);
    for(i=0;i<strlen(s);i++)
    {
        if(strchr("0123456789",s[i])==0)
        {
            strcpy(s+i,s+i+1);
            i--;
        }
    }
    if(strlen(s)==0)
    {
        cout<<"Sir vid";
    }
    else
    {
        cout<<s;
    }

    return 0;
}
