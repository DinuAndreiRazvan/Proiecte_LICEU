/*Se consideră o matrice cu m linii și n coloane, numere naturale. Folosind metoda Divide et Impera, determinați suma numerelor pare din matrice.*/
#include<iostream>

using namespace std;

int f(int a[100][100],int st,int dr,int limita)
{

    if(st==dr)
    {
        int c,d=st/limita;
        if(st%limita!=0){d++;c=a[d][st%limita];cout<<d<<"-"<<st%limita<<" ";}
        else {c=a[d][limita]; cout<<d<<"-"<<limita<<" ";}
        if(c%2==0)
            {cout<<"*"<<endl;return c;}
        else {cout<<endl;return 0;}
    }
    else
    {
        int mij=(st+dr)/2;
        int x=f(a,st,mij,limita);
        int y=f(a,mij+1,dr,limita);
        return x+y;
    }

}

int main()
{
    int a[100][100],m,n,i,j,k;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<f(a,1,m*n,n);

    return 0;
}
