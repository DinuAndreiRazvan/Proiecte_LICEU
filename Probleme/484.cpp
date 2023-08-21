/*ana,. are 25 mere si023;; doua pere 2?!*/
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[256];
    cin.getline(s,255);
    int suma=0,i=0,p,c;

    while(i<strlen(s))
    {
        p=0;
        while(s[i]>='0' && s[i]<='9')
        {
            c=s[i]-'0';
            p=p*10+c;
            i++;
        }
        suma=suma+p;
        i++;
    }

    cout<<endl<<suma;

    return 0;
}
