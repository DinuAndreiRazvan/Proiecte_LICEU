/*Scrieţi programul C/C++ care citeşte din fişierul text BAC.TXT numărul întreg n
(1≤n≤10000) şi un şir de n perechi de numere întregi a b (1≤a≤b≤32000), fiecare pereche
fiind scrisă pe o linie nouă a fişierului, cu un spaţiu între cele două numere. Programul
afişează pe ecran pentru fiecare pereche a,b cel mai mare număr natural din intervalul
închis [a,b]care este o putere a lui 2 sau numărul 0 dacă nu există nicio putere a lui 2 în
intervalul respectiv. Numerele afișate pe ecran se scriu în linie, separate prin câte un
spașiu. Un număr p este putere a lui 2 dacă există un număr natural k astfel încât p=2k
.
Exemplu: dacă fişierul BAC.TXT conţine numerele
3
2 69
10 20
19 25
se va afişa: 64 16 0.*/
#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V22.4.in");

int main()
{
    int n,a,b,i,aux,maxa,x;
    fin>>n;
    for(i=0;i<n;i++)
    {
        maxa=0;
        fin>>a>>b;
        if(a>b)
        {
            aux=a;
            a=b;
            b=aux;
        }
        while(a!=b)
        {
            x=a;
            while(x%2==0)
            {
                x=x/2;
            }
            if(x==1)
            {
                maxa=a;
            }
            a++;
        }
        cout<<maxa<<" ";
    }

    return 0;
}
