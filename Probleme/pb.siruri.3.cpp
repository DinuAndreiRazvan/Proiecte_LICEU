#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char t[256],s[256]="pictura aceea este frumoasa si calda",a[256];
    int i;
    char*p;

    p=strtok(s," ");
    a[0]=0;

    while(p)
    {
        strcpy(t,p);
        if(strlen(t)>2 && strlen(t)%2==1)
        {
            strcpy(t+strlen(t)/2,t+strlen(t)/2+1);
        }
        strcat(a," ");
        strcat(a,t);
        t[0]=0;
        p=strtok(0," ");
    }
    strcpy(s,a+1);
    cout<<s;
    return 0;

}
