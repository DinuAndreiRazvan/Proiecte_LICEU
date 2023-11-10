#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");

void prefixe (char s[30])
{
    int i,j;
    for(i=0;i<strlen(s);i++)
    {
       for(j=0;j<=i;j++)
       {
           fout<<s[j];
       }
       fout<<" ";
    }
}

void sufixe(char s[30])
{
    int i;
    for(i=strlen(s)-1;i>=0;i--)
    {
        fout<<s+i<<" ";
    }
}


int main()
{
    char s[30],a[30],b[30];
    char*p;
    int i=0,minim=31,maxim=0;
    while(fin.getline(s,30))
    {
        p=strtok(s," ");
        while(p)
        {
            if(strlen(p)<minim)
            {
                minim=strlen(p);
                strcpy(a,p);
            }
            if(strlen(p)>=maxim)
            {
                maxim=strlen(p);
                strcpy(b,p);
            }
            p=strtok(NULL," ");
        }
    }
    fout<<a<<" ";
    prefixe(a);
    fout<<"\n"<<b<<" ";
    sufixe(b);
    fout<<"\n";
    fout<<a<<" "<<b;
    return 0;
}
