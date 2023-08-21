#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[21];
    cin.get(s,20);
    int k=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]<='z' && s[i]>='a')
        {
            strcpy(s+i,s+i+1);
            i=i-1;
        }
    }
    if(strlen(s)==0)
    {
        cout<<"CUVANT VID";
    }
    else
    {
        cout<<s;
    }
    return 0;
}

