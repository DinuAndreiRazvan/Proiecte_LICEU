
#include <iostream>
#include <string.h>

using namespace std;
char s[100],t[100];
char*p;

int main()
{
    int i,k;
    cin.getline(s,100);
    t[0]='\0';
    p=strtok(s," ");
    while(p!=0)
    {
        i=0;
        k=0;
        while(i<strlen(p))
        {
            if(strchr("aeiou",p[i])!=0)
            {
                k++;
            }
            i++;
        }
        if(k>2)
        {
            strcat(t,p);
            strcat(t," ");
        }
        p=strtok(0," ");
    }
    strcpy(s,t);
    cout<<s;
    return 0;
}
