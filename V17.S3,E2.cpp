#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101],b[101],c[101];
    int n,i,k,j;
    cin.get(s,100);
     for(i=0;i<strlen(s);i++)
     {
         k=0;
         j=0;
         while(s[i]!=' ')
         {
             if(strchr("aeiou",s[i])==0)
             {
                 k++;
             }
             b[j]=s[i];
             j++;
             i++;
         }
         b[j]=NULL;
         if(k==0)
         {
             strcpy(c,s+i);
             strcpy(s+i+1,b);
             i=i+strlen(b)+1;
             strcpy(s+i,c);
         }

     }
     cout<<s;

    return 0;
}
