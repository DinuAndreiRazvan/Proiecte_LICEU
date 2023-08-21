#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char t[256],s[256]="rece si cristalina apa este",a[20][20],b[]="aeiou";
    int i=0,v[20],j=0,n,aux;
    char*p;

    p=strtok(s," ");

    while(p)
    {
        strcpy(a[j],p);
        n=0;
        for(i=0;i<strlen(p);i++)
        {
            if(strchr(b,p[i])!=0)
            {
                n++;
            }
        }
        v[j]=n;
        j++;
        p=strtok(0," ");
    }
    n=j;

    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if((v[i]>v[j]) || (v[i]==v[j] && strlen(a[i])>strlen(a[j])))
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }
    s[0]=0;
    for(i=0;i<n;i++)
    {
        strcat(s," ");
        strcat(s,a[i]);
    }
    strcpy(s,s+1);

    cout<<s;
    return 0;

}
