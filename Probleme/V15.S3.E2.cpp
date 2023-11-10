#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[101];
    int i,k=0,cnt=0;
    cin.get(s,100);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            if(k==0)
            {
                cnt++;
            }
            k=0;
        }
        else
        {
            if(strchr("aeiou",s[i]))
            {
                k++;
            }
            else
            {
                k--;
            }
        }
    }
        if(k==0)
        {
            cnt++;
        }
    cout<<cnt;
    return 0;
}
