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
        k=0;
        while(i<strlen(p))
        {
            k++;
            i++;
        }
        if(strstr(p+k-2,"ma")==0)
        {
            strcat(t,p);
            strcat(t," ");
        }
        else
        {
            strcat(t,"floare");
            strcat(t," ");
        }
        p=strtok(0," ");
    }
    strcpy(s,t);
    cout<<s;
    return 0;
}
