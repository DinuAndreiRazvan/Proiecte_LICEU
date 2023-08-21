/*
3.  a) Scrieţi definiţia completă a unui subprogram, nz, cu un parametru întreg n (0<n≤32000),
    care returnează numărul zerourilor de la sfârşitul numărului n!. (6p.)
    b) Scrieţi programul C/C++ care citește de la tastatură un număr natural k (0<k≤3) și
    determină, folosind apeluri ale subprogramului nz, cel mai mic număr natural n pentru care
    n! are cel puţin k zerouri la sfârşit. Numărul determinat se afișează pe ecran.
*/
#include<iostream>

using namespace std;

int nz(int n)
{
    int c=0;
    long p=1;
    while(n)
    {
        p=p*n;
        while(p%10==0)
        {
            c++;
            p=p/10;
        }
        p=p%10;
        n--;
    }
    return c;
}

int main()
{
    int n=1,k;
    cin>>k;

    while(nz(n)!=k)
    {
        n++;
    }
    cout<<n;

    return 0;
}
