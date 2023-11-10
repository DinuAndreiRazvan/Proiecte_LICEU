#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
ifstream fin("prosir.in");
ofstream fout("prosir.out");

int main()
{
    char s[201],b[]="aeiou";
    int i,n;
    fin.get(s,200);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
       if((i==n-2 || s[i+1]==' ')&& s[i]>='a' && s[i]<='z')
       {
           s[i]='5';
       }
    }
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
