#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101],b[100];
    int i,n,j=0;
    cin.get(s,100);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if((i==0 || s[i-1]==' ')&& s[i]>='A' && s[i]<='Z')
        {
            b[j]=s[i];
            j++;
        }
    }
    b[j]= NULL;
    cout<<b;
    return 0;
}
