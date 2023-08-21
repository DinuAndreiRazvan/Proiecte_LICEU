#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    char s[101],x[100]="aeiouAEIOU";
    int i,n;
    cin.get(s,100);
    n=strlen(s);
    for(i=0;i<n;i++)
    {

        if( strchr(x,s[i])!=0)
            {
                if( strchr(x,s[i+1])!=0 )
                    {
                        strcpy(s+i,s+i+2);
                    }

            }

        if(s[i]==' ')
            {
                if(strchr(x,s[i-1])!=0 && strchr(x,s[i+1])!=0)
                {
                        strcpy(s+i-1,s+i);
                        strcpy(s+i,s+i+1);
                }
            }

    }
    cout<<s<<" ";
    return 0;
}
