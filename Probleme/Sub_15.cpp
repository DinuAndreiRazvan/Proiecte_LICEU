#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");

int verif(char s[20])
{
   int i;
   for(i=1;i<strlen(s);i++)
   {
       if(strchr("aeiou",s[i])==NULL && strchr("aeiou",s[i-1])==NULL)
       {
           return 1;
       }
   }
   return 0;
}

int nrvoc(char s[20])
{
    int i,k=0;
    for(i=1;i<strlen(s);i++)
   {
       if(strchr("aeiou",s[i])!=NULL)
       {
           k++;
       }
   }
   return k;
}

int main()
{
    char s[100], *p,sep[]=" ",t[20];
    fin.get(s,100);
    p=strtok(s,sep);
    while(p)
    {
        strcpy(t,p);
        if(verif(t)==1 && nrvoc(t)>=3)
        {
            fout<<t<<"\n";
        }
        p=strtok(NULL,sep);
    }

    return 0;
}
