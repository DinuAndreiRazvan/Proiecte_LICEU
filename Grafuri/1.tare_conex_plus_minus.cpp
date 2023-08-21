///Se citesc n, nr de noduri ale unui graf orientat si lista arcelor.
///Sa se afiseze nodurile componentei tare conexa de dimensiune maxima
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("alg.in");

int a[100][100], n, ctc[100], s[100], p[100], frecv[100];

void df1(int x)         ///dfs de pe graful initial, din nodul x, cu aparitii notate in s
{
    s[x] = 1;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] == 0 && a[x][i] == 1)  ///daca nodul i nu a fost vizitat si daca pot ajunge din x in i
        {
            df1(i);
        }
    }
}

void df2(int x)         ///dfs de pe graful transpus, din nodul x, cu aparitii notate in p
{
    p[x] = 1;
    for(int i = 1; i <= n; i++)
    {
        if(p[i] == 0 && a[i][x] == 1)   ///daca nodul i nu a fost vizitat si daca pot ajunge din x in i (pt graful transpus)
        {
            df2(i);
        }
    }
}

int main()
{
    int i, j, nrc = 0, aux_nrc;
    fin >> n;       ///nr de noduri
    while(fin >> i >> j)    ///se citeste lista arcelor
    {
        a[i][j] = 1;        ///se formeaza matricea de adiacenta
    }

    for(i=1; i <= n; i++)       ///sa cautam componenta conexa care incepe cu nodul i
    {
        if(ctc[i] == 0)         ///cautam comp. conexa din i DOAR DACA ea nu exista deja
        {
            for(j=1; j <= n; j++)       ///golim vectorii de aparitii s si p
            {
                s[j] = 0;
                p[j] = 0;
            }
            nrc++;                      ///crestem nr de comp. conexe

            df1(i);                     ///facem dfs in graful initial, din nodul i
            df2(i);                     ///facem dfs in graful transpus, din nodul i
            for(j=1; j <= n; j++)       ///parcurgem vectorii de aparitii, s si p
            {
                if(s[j] == 1 && p[j] == 1)  ///verificam intersectia dintre s si p
                {
                    ctc[j] = nrc;           ///de fiecare data cand gasim o intersectie, in vectorul(cumva de frecvneta) ctc,
                                            ///notam indicele componentei tare conexe gasite
                }
            }
        }
    }

    for(i = 1; i <= n; i++)
    {
        cout << ctc[i] << " ";              ///afisam vectorul ctc
    }

    int maxim = 0;
    for(i = 1; i <= n; i++)
    {
        frecv[ctc[i]]++;
    }

    for(i = 1; i <= nrc; i++)
    {
        if(frecv[i] > maxim)
        {
            maxim = frecv[i];
            aux_nrc = i;
        }
    }

    cout << "\n\n";
    for(i = 1; i <= n; i++)
    {
        if(ctc[i] == aux_nrc)
        {
            cout << i << " ";
        }
    }



    return 0;
}
