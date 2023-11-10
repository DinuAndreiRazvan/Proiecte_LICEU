#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");
void construieste(char s[200])
{
    char t[200];
    while(fin.getline(t,200))
    {
        strcat(s,t);
        strcat(s," ");
    }
    s[strlen(s)-1]=0;
}
void decodifica(char s[200])
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(strchr("012345 ",s[i])==NULL)
        {
            s[i]++;
        }
        else
        {
            if(s[i]=='0')
            {
                s[i]='a';
            }
            if(s[i]=='1')
            {
                s[i]='e';
            }
            if(s[i]=='2')
            {
                s[i]='i';
            }
            if(s[i]=='3')
            {
                s[i]='o';
            }
            if(s[i]=='4')
            {
                s[i]='u';
            }
        }
    }
}

int main()
{
    char s[200]="";
    construieste(s);
    fout<<s<<"\n";
    decodifica(s);
    fout<<s;

    return 0;
}
