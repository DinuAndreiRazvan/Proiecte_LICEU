#include<iostream>
#include<string.h>

using namespace std;
char t[101];

int main()
{
    char s[101];
    char*p;
    int i=0;
    cin.get(s,100);
    p=strtok(s," ");
    while(p)
    {
        t[i]=p[0];
        i++;
        p=strtok(0," ");
    }
    cout<<t;

    return 0;
}
