#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");
int vocale(char prop[255])
{
    int i,k=0;
    for(i=0;i<strlen(prop);i++)
    {
        if(strchr("aeiou",prop[i])!=0)
        {
            k++;
        }
    }
    return k;
}
void cuvant(char prop[255],char cuv[255])
{
    char *p;
    int maxi=0;
    p=strtok(prop," ");
    while (p)
    {
        if(strlen(p)>maxi)
        {
            strcpy(cuv,p);
            maxi=strlen(p);
        }
        p=strtok(NULL," ");
    }
}



int main()
{

    int n,i;
    char s[255],a[255],cuv[255];
    fin>>n;
    while(n!=0)
    {
        fin.get();
        fin.get(s,255);
        cuvant(s,cuv);
        strcat(a,cuv);
        strcat(a," ");
        n--;

    }
    a[strlen(a)-1]=0;
    fout<<a<<"\n"<<vocale(a);


    return 0;
}
