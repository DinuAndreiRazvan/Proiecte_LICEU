/*Se consideră un șir cu n elemente, numere naturale. Folosind metoda Divide et Impera, determinați suma elementelor pare din acest șir.*/
#include<iostream>

using namespace std;

int f(int a[],int st,int dr)
{

    if(st==dr)
    {
        if(a[st]%2==0)return a[st];
        else return 0;
    }
    else
    {
        int mij=(st+dr)/2;
        int x=f(a,st,mij);
        int y=f(a,mij+1,dr);

        return x+y;
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
    cout<<f(a,1,n);

    return 0;
}
