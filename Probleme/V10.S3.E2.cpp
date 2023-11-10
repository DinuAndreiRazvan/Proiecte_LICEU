#include<iostream>
#include<string.h>

using namespace std;

int main()

{
    char s[101], t[101] ,k;
    int i=0,n,j;
    cin.get(s,100);
    n=strlen(s);
    while(i<strlen(s))
    {
        if(k==s[i])
        {
            if(s[i+1]==' ')
            {
            strcpy(t," succes");
            strcpy(t+7,s+j);
            strcpy(s+j,t);
            i=i+7;
            }
        }
        if(s[i]==' ')
        {
            k=s[i-1];
            j=i;
        }
        i++;
    }
    cout<<s;

    return 0;

}
