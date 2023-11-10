#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101],  b[100], c[100], *aux, sep[] = " ,.";
    int i,n,j=0, k = 1;
    cin.get(s,100);
    n=strlen(s);
    aux = strtok(s,sep);
    strcpy(b,aux);
    n = strlen(b);
    for(i = n - 1 ; i >= 0; i--)
    {
        c[j] = b[i];
        j++;
    }
    if(strcmp(c,b) == 0)
    {
        cout<<b;
        k = 0;
    }

    while(aux)
    {
        aux = strtok(NULL,sep);
        strcpy(b,aux);
        j = 0;
        n = strlen(b);
        for(i = n - 1 ; i >= 0; i--)
        {
            c[j] = b[i];
            j++;
        }
        if(strcmp(c,b) == 0)
        {
            cout<<" "<<b<<" ";
            k = 0;
        }
    }
    if(k == 1)
    {
        cout<<"IMPOSIBIL";
    }
    return 0;
}
