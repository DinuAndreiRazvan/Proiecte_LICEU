/*
4
David
9 7 2007
Razvan
22 8 1979
Andrei
27 2 2004
Mos Craciun
25 12 0
*/
#include<iostream>
#include<string.h>

using namespace std;

struct angajati
{
    char nume[30];
    int zi;
    int luna;
    int an;
};
angajati mini;

int main()
{
    int n,i,j=0;
    char s[30];
    cin>>n;
    cin.get();
    angajati a[50];
    for(i=0;i<n;i++)
    {
        cin.getline(a[i].nume,30);
        cin>>a[i].zi>>a[i].luna>>a[i].an;
        cin.get();
    }
    cout<<endl;
    cin.getline(s,30);
    for(i=0;i<n;i++)
    {
        if(strcmp(s,a[i].nume)==0)
        {
            cout<<a[i].zi<<"."<<a[i].luna<<"."<<a[i].an<<endl;
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i].luna==12)
        {
            cout<<a[i].nume;
        }
    }

    for(i=0;i<n;i++)
    {
         if(a[i].an>mini.an)
        {
            strcpy(mini.nume,a[i].nume);
            mini.zi=a[i].zi;
            mini.luna=a[i].luna;
            mini.an=a[i].an;
        }
        else
        {
            if(mini.an==a[i].an)
            {
                if(a[i].luna>mini.luna)
                {
                    strcpy(mini.nume,a[i].nume);
                    mini.zi=a[i].zi;
                    mini.luna=a[i].luna;
                    mini.an=a[i].an;
                }
                else
                {
                    if(a[i].luna==mini.luna)
                    {
                        if(a[i].zi>mini.zi)
                        {
                            strcpy(mini.nume,a[i].nume);
                            mini.zi=a[i].zi;
                            mini.luna=a[i].luna;
                            mini.an=a[i].an;
                        }
                    }
                }
            }
        }
    }
    cout<<endl;
    cout<<mini.nume<<" nascut pe data de "<<mini.zi<<"."<<mini.luna<<"."<<mini.an<<endl;

    return 0;
}
