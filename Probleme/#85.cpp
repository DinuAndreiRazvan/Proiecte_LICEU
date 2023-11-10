#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256],x[100]="aeiouAEIOU",aux[256];
    int i,n;
    cin.get(s,255);
    n=strlen(s);
    for(i=0;i<n;i++)
    {

        if(strchr(x,s[i])!=0)
        {
            strcpy(aux,s);

            aux[i+1]='*';
            n=n+1;

            strcpy(aux+i+2,s+i+1);

            strcpy(s,aux);


        }


    }
    cout<<s;

    return 0;
}
