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
        if(s[i]<='z' && s[i]>='a' && (i==0 || s[i-1]==' '))
        {
            s[i]=s[i]-32;
        }
        else
        {
            if(s[i]<='Z' && s[i]>='A' && s[i-1]!=' ' && i!=0)
            {
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;




    return 0;

}
