///n -> n numere naturale distincte
///lexicografica sirurile de n valori cu prop
///ca oricare doua valori invecinate sunt prime intre ele
///sirpie.in
///sirpie.out
///4
///8 6 7 9


#include <fstream>

using namespace std;

int a[10], s[10], n;

ofstream fout("sirpie.out");

void citire(int a[10], int &m)
{
    ifstream fin("sirpie.in");
    fin >> m;//citire nr de numrere
    for(int i = 0; i < m; i++)//citire numere
    {
        fin >> a[i];
    }
}

void afisare(int k)
{
    for(int i= 0; i < n; i++)
    {
        fout << a[s[i]] << " ";
    }
}

int solutie(int k)//arata sfarsitul sirului
{
    if(k == n)
    {
        return 1;
    }
    return 0;
}

int valid(int k)
{
    for(int i = 0; i < k; i++)//sa nu se repete cifrele
    {
        if(s[i] == s[k])
            return 0;
    }

    if(k >= 1 && a[s[k-1]] > a[s[k]])
    {
        return 0;
    }
    return 1;
}

void bk(int k)
{
    if(solutie(k))
    {
        afisare(k);
    }
    else
    {
        int i;
        for(i = 0; i < n; i++)
        {
            s[k] = i;
            if(valid(k))
            {
                bk(k+1);
            }
        }
    }
}

int main()
{
    citire(a, n);
    bk(0);
    return 0;
}
