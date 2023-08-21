#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     char s[256],k;
     int i;
     cin.get(s,255);
     for(i=0;i<strlen(s);i++)
     {
         if(strchr("aeiou",s[i])==0)
         {
             k=s[i];
         }
     }
     cout<<k;
     return 0;

}
