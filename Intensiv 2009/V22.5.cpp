/*
Scrieţi un program C/C++ care citeşte de la tastatură numerele naturale m şi n din intervalul
[1,24], apoi construieşte în memorie şi afişează pe ecran un tablou bidimensional cu m
linii şi n coloane astfel încât prin parcurgerea acestuia linie cu linie de sus în jos şi fiecare
linie de la stânga la dreapta, se obţin în ordine descrescătoare toate numerele naturale de
la 1 la m*n, ca în exemplu.
5.
Fiecare linie a tabloului este afişată pe câte o linie a ecranului, elementele
aceleiaşi linii fiind separate prin câte un spaţiu.
Exemplu: pentru m=4 şi n=3 se va construi şi afişa tabloul alăturat. (10p.)
12 11 10
 9 8 7
 6 5 4
 3 2 1
*/
#include<iostream>

using namespace std;

int main()
{
    int m,n,a[24][24],i,j;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
            {
                a[i][j]=n*(m-i);
            }
            else
            {
                a[i][j]=a[i][j-1]-1;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
