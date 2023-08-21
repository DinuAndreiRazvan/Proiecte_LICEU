#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101],b[]="aeiou",t[101],x[101];
    int i,n,k,c,m,h;
    cin.get(s,100);
    h=strlen(s);
    strcpy(x,s);
    for(i=0;i<h;i++)
    {
        c=0;
        k=0;
        if(s[i-1]==' ')
        {
            m=i;
            while(s[i]!=' ')
            {
                if(strchr(b,s[i])!=0)
                {
                    k=k+1;
                }
                else
                {
                    c=c+1;
                }
                i++;
             }
        }
        n=k+c;
        strncpy(t,s+m,n);

        if(c>k)
        {
            cout<<t<<endl;
        }

    }

    return 0;
}
