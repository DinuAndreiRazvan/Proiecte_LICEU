#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin ("558.in");
int v[100];

struct carti
{
    char titlu[30];
    char autor[30];
    int pret;
};

int main()
{
    int n,i=1,ok=0,p=0,j;
    fin>>n;
    fin.get();
    carti a[100],aux;

    for(i=1;i<=n;i++)
    {
        fin.getline(a[i].titlu,30);
        fin.getline(a[i].autor,30);
        fin>>a[i].pret;
        fin.get();
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j<=n;j++)
        {
            p=0;
            ok=0;
            while(ok==0)
            {
                if(a[i].titlu[p]>a[j].titlu[p])
                {
                    ok=1;
                }
                else
                {
                    ok=2;
                }
                p++;
            }

            if(ok==1)
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        cout<<'"'<<a[i].titlu<<'"'<<" de "<<a[i].autor<<" costa "<<a[i].pret<<" lei"<<endl;
    }

    cout<<endl;
    char s[30];
    /*Mihail Sadoveanu*/
    cin.get(s,30);
    for(i=1;i<=n;i++)
    {
        if(strcmp(s,a[i].autor)!=1)
        {
            cout<<'"'<<a[i].titlu<<'"'<<"  ";
        }
    }

    for(i=1;i<n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[i].pret>a[j].pret)
            {
                strcpy(aux.titlu,a[i].titlu);
                strcpy(a[i].titlu,a[j].titlu);
                strcpy(a[j].titlu,aux.titlu);

                strcpy(aux.autor,a[i].autor);
                strcpy(a[i].autor,a[j].autor);
                strcpy(a[j].autor,aux.autor);

                aux.pret=a[i].pret;
                a[i].pret=a[j].pret;
                a[j].pret=aux.pret;
            }
        }
    }
    cout<<endl<<endl<<"Cele mai scumpe sunt: ";
    cout<<endl<<'"'<<a[i].titlu<<'"'<<" de "<<a[i].autor<<endl;
    while(a[i].pret==a[i-1].pret)
    {
        cout<<'"'<<a[i-1].titlu<<'"'<<" de "<<a[i-1].autor<<endl;
        i--;
    }
    cout<<endl<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<'"'<<a[i].titlu<<'"'<<" de "<<a[i].autor<<" costa "<<a[i].pret<<" lei"<<endl;
    }


    return 0;
}
