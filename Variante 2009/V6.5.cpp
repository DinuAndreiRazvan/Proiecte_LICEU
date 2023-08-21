#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     char s[256];
     int i;
     cin.get(s,255);
     for(i=0;i<strlen(s);i++)
     {
         if((s[i-1]==' ' || i==0) && s[i]!=' ')
         {
             s[i]=s[i]-32;
         }
     }
     cout<<s;
     return 0;

}
