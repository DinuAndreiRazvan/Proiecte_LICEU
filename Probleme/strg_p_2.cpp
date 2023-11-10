#include <iostream>
#include <string.h>

using namespace std;
char s[100],t[100];
char*p;

int main()
{
    cin.getline(s,100);
    t[0]='\0';
    p=strtok(s," ");
    while(p!=0)
    {
        if(p[0]!='m')
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
