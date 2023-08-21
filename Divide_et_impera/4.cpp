//Se dă un şir cu n elemente, numere naturale. Folosind metoda Divide et Impera să se verifice dacă toate elementele şirului au număr par de cifre.
#include<iostream>

using namespace std;

f(int a[],int st, int dr)
{
    if(st==dr)
    {
        int k=0,j;
        j=a[st];
        while(j)
        {
            j=j/10;
            k++;
        }
        if(k%2==0)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        int mij=(st+dr)/2;
        int x=f(a,st,mij);
        int y=f(a,mij+1,dr);

        return (x && y);

    }

}

int main()
{
    int n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(f(a,0,n-1)==1)
    {
        cout<<"Da";
    }
    else
    {
        cout<<"Nu";
    }

    return 0;
}
