/*Se consideră un șir cu n elemente, numere naturale. Folosind metoda Divide et Impera, determinați cel mai mare element prim din acest șir.*/
#include<iostream>

using namespace std;

int f(int a[],int st,int dr)
{

    if(st==dr)
    {
        int copie,d=2;
        copie=a[st];
        while(copie/2>=d)
        {
            if(copie%d==0)
            {
                return 0;
            }
            d++;
        }
        return a[st];
    }
    else
    {
        int mij=(st+dr)/2;
        int x=f(a,st,mij);
        int y=f(a,mij+1,dr);

        if(x>y)return x;
        return y;
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
    int g=f(a,1,n);
    if(g)cout<<g;
    else cout<<"Nu exista";

    return 0;
}
