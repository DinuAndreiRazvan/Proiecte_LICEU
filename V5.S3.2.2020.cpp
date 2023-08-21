#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[]="era o selectie reper de desene animate prezenta",t[100],u[100],S[100];
    char*p;
    int i,j=0,ok=0,m=0,k;
    S[0]=0;
    u[0]=0;
    p=strtok(s," ");
    while(p)
    {
        strcpy(t,p);
        m=m+strlen(t);
        if (strlen(t)%2==1)
        {
            i=strlen(t)-1;
            j=0;
            while(i!=0)
            {
                u[j]=t[i];
                j++;
                i--;
            }
            u[j]=t[i];
            k=1;
        }
        if(k!=0)
        {
            strcat(S," ");
            strncat(S,u,j+1);
            ok=1;
        }
        else
        {
            strcat(S," ");
            strcat(S,t);
        }
        t[0]=0;
        u[0]=0;
        j=0;
        k=0;
        p=strtok(0," ");
    }
    strcpy(s,S+1);
    if(ok==0)
    {
        cout<<"nu exista";
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}
