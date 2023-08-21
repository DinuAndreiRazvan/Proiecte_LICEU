/*
5
Dinu Andrei
Inginer
27
Februarie
2004
Harap-Alb
Actor
1
Iunie
1990
Dinu David
Inginer
9
Iulie
2007
Stefan cel Mare
Economist
23
Ianuarie
1600
Vlad Tepes
Economist
24
Ianuarie
1600
*/
#include<iostream>
#include<string.h>

using namespace std;

int nrluna(char s[30])
{
    switch(s[0])
    {
        case "Ianuarie":
            return 1;
            break;
        case "Februarie":
            return 2;
            break;
        case "Martie":
            return 3;
            break;
        case "Aprilie":
            return 4;
            break;
        case "Mai":
            return 5;
            break;
        case "Iunie":
            return 6;
            break;
        case "Iulie":
            return 7;
            break;
        case "August":
            return 8;
            break;
        case "Septembrie":
            return 9;
            break;
        case "Octombrie":
            return 10;
            break;
        case "Noiembrie":
            return 11;
            break;
        case "Decembrie":
            return 12;
            break;
    }
}

struct persoana
{
    char nume[30];
    char profesie[30];
    int zi;
    char luna[30];
    int an;
};
persoana aux;

int main()
{
    int n,i,x,y;
    cin>>n;
    cin.get();
    persoana a[100];
    for(i=0;i<n;i++)
    {
        cin.getline(a[i].nume,30);
        cin.getline(a[i].profesie,30);
        cin>>a[i].zi;
        cin.get();
        cin.getline(a[i].luna,30);
        cin>>a[i].an;
        cin.get();
    }

    cout<<endl<<"Ingineri sunt:"<<endl;

    for(i=0;i<n;i++)
    {
        if(strcmp("Inginer",a[i].profesie)==0)
        {
            cout<<a[i].nume<<" nascut pe "<<a[i].zi<<" "<<a[i].luna<<" "<<a[i].an<<endl;
        }
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i].an==1990)
        {
            cout<<a[i].nume<<" este nascut in "<<a[i].an<<endl;
        }
    }
    cout<<endl;
    x=0;
    for(i=0;i<n;i++)
    {
        if(strcmp("Economist",a[i].profesie)==0)
        {
            y=nrluna(a[i].luna);
            if(a[i].an>aux.an)
            {
                aux.an=a[i].an;
                x=y;
                aux.zi=a[i].zi;
                strcpy(aux.nume,a[i].nume);
            }
            else
            {
                if(a[i].an==aux.an)
                {
                    if(y>x)
                    {
                        x=y;
                        aux.zi=a[i].zi;
                        strcpy(aux.nume,a[i].nume);
                    }
                    else
                    {
                        if(a[i].zi>aux.zi)
                        {
                            strcpy(aux.nume,a[i].nume);
                            aux.zi=a[i].zi;
                        }
                    }
                }
            }
        }
    }
    cout<<aux.nume<<" este cel mai tanar Economist";

    return 0;
}
