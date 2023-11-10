#include <iostream>
#include <string.h>

using namespace std;
char*p;

int main()
{
    char s[101],t[101],a[101];
    int i,k=0,ok,j=0,p;
    cin.get(s,100);
    strcpy(a,s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ' || i==0)
        {
            k=1;
            while(s[i]!=' ')
            {
                k++;
                i++;
            }
            if(k%2==0)
            {
                p=0;
                for(j=i-1;j>=i-k;j--)
                {
                    t[p]=s[j];
                    p++;
                }
                p=0;
                for(j=i-k+1;j<i;j++)
                {
                    s[j]=t[p];
                    p++;
                }
            }
        }
    }
    if(strcmp(a,s)==0)
    {
        cout<<"NU EXISTA";
    }
    else
    {
        cout<<s;
    }
    return 0;
}
