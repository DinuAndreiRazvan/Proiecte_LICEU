/*Se dă un vector cu n elemente numere naturale. Folosind metoda Divide et Impera să se verifice dacă toate elementele vectorului sunt egale.*/
#include<iostream>

using namespace std;

int f(int a[],int st,int dr)
{

    if(st==dr)
    {
        return a[st];
    }
    else
    {
        int mij=(st+dr)/2;
        int x=f(a,st,mij);
        int y=f(a,mij+1,dr);

        if(x==y && y!=-1)return x;
        return -1;
    }

}

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(f(a,1,n)!=-1)cout<<"DA";
    else cout<<"NU";

    return 0;
}
