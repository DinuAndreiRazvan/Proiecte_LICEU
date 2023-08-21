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
        if(s[i]=='-' && s[i+1]>='0' && s[i+1]<='9')
        {
            strcpy(s+i,s+i+1);
        }
    }
    cout<<s;
    return 0;
}
