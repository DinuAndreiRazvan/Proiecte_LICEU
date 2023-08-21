/*
3
Andrei
10
3
10 9 9
Cosmin
8
2
9 9
Ana
8
3
10 10 9
*/
#include<iostream>
#include<string.h>

using namespace std;

struct elev
{
    char nume[30];
    int teza;
    int nr_note;
    int nota[10];
};
elev aux;

void alfabetic(char x[30],char y[30],int p,int&ok)
{
    if(x[p]>y[p])
    {
        ok=1;
    }
    else
    {
        if(x[p]<y[p])
        {
            ok=0;
        }
        else
        {
            if(p<strlen(x) && p<strlen(y))
            {
                alfabetic(x,y,p+1,ok);
            }
        }
    }
}

int main()
{
    int n,i,j,nmax=0,p,ok,l;
    elev a[30];
    float s;
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    {
        cin.getline(a[i].nume,30);
        cin>>a[i].teza;
        cin>>a[i].nr_note;
        for(j=0;j<a[i].nr_note;j++)
        {
            cin>>a[i].nota[j];
        }
        cin.get();
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<a[i].nr_note;j++)
        {
            s=s+a[i].nota[j];
        }
        s=s/a[i].nr_note;
        s=s*3+a[i].teza;
        s=s/4;
        cout<<a[i].nume<<" are media "<<s<<endl;
    }
    cout<<endl;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            p=0;ok=0;
            alfabetic(a[i].nume,a[j].nume,p,ok);
            if(ok==1)
            {
                strcpy(aux.nume,a[i].nume);
                strcpy(a[i].nume,a[j].nume);
                strcpy(a[j].nume,aux.nume);

                aux.teza=a[i].teza;
                a[i].teza=a[j].teza;
                a[j].teza=aux.teza;

                aux.nr_note=a[i].nr_note;
                a[i].nr_note=a[j].nr_note;
                a[j].nr_note=aux.nr_note;

                if(a[j].nr_note>a[i].nr_note)
                {
                    nmax=a[j].nr_note;
                }
                else
                {
                    nmax=a[i].nr_note;
                }

                for(l=0;l<nmax;l++)
                {
                    aux.nota[l]=a[i].nota[l];
                    a[i].nota[l]=a[j].nota[l];
                    a[j].nota[l]=aux.nota[l];
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<endl<<a[i].nume<<endl;
        cout<<"Nota in teza: "<<a[i].teza<<endl;
        cout<<"Note ";
        for(j=0;j<a[i].nr_note;j++)
        {
            cout<<a[i].nota[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
