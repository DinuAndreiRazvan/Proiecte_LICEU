#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101],b[100]="aeiou",a;
    int i,n,j=0,k,kmax=0;
    cin.get(s,100);
    n=strlen(s);
    while(j<=4)
    {

        k=0;
        for(i=0;i<n;i++)
        {
            if(s[i]==b[j]||s[i]==b[j]-32)
            {
                k++;
            }
        }

        if(kmax<k)
        {
            kmax=k;
            a=b[j];
        }
        j++;

    }

    cout<<a;
    return 0;
}
