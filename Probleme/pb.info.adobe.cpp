#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[]="abdeo",t[10001],a[6];
    int i,j,x,y,aux,k=0,ok=0;
    cin.get(t,100000);

    for(i=0;i<strlen(t);i++)
    {
        if((t[i]>='A') && (t[i]<='Z'))
        {
            t[i]=t[i]+32;
        }
    }

    for(i=0;i<strlen(t)-4;i++)
    {
        strncpy(a,t+i,5);
        for(j=0;j<5;j++)
        {

            if((strchr(a,'a')==0) && ((a[j]=='*') || (a[j]=='-')))
            {
                a[j]='a';
                ok=1;
            }

            if((strchr(a,'e')==0) && ((a[j]=='*') || (a[j]=='-')))
            {
                a[j]='e';
                ok=2;
            }

            if((strchr(a,'o')==0) && ((a[j]=='*') || (a[j]=='-')))
            {
                a[j]='o';
                ok=3;
            }

            if(strchr(a,'b')==0 && ((a[j]=='*') || (a[j]=='+')))
            {
                a[j]='b';
                ok=4;
            }

            if((strchr(a,'d')==0) && ((a[j]=='+') || (a[j]=='*')))
            {
                a[j]='d';
                ok=5;
            }

            ok=0;

        }
        for(x=0;x<4;x++)
        {
            for(y=0;y<4;y++)
            {
                if(a[y]>a[y+1])
                {
                    aux=a[y];
                    a[y]=a[y+1];
                    a[y+1]=aux;
                }
            }
        }

        if (strcmp(a,s)==0)
        {
            k++;
        }

    }
    cout<<k;
}
