#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[251];
    int i;
    cin.get(s,250);
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]==s[i+1] && s[i]!='*')
        {
            cout<<s[i]<<s[i]<<"\n";
        }
    }
}
