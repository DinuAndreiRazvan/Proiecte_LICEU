/*Se consideră o matrice cu m linii și n coloane, numere naturale. Folosind metoda Divide et Impera, determinați suma numerelor pare din matrice.*/
#include<iostream>

using namespace std;

int f(int a[100][100],int ist,int jst,int idr,int jdr)
{
    for(int i=ist;i<=idr;i++)
    {
        for(int j=jst;j<=jdr;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    if(ist==idr && jst==jdr)
    {
        if(a[ist][jst]%2==0)
        {
            return a[ist][jst];
        }
        return 0;
    }
    else
    {
        int imij=(ist+idr)/2;
        int jmij=(jst+jdr)/2;
        int x,y,z,t;
        x=f(a,ist,jst,imij,jmij);
        cout<<x;
        y=f(a,imij+1,jst,idr,jmij);
        cout<<y;
        z=f(a,ist,jmij+1,imij,jdr);
        cout<<z;
        t=f(a,imij+1,jmij+1,idr,jdr);
        cout<<t;

        return x+y+z+t;
    }

}

int main()
{
    int a[100][100],n,i,m,j;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<f(a,0,0,m-1,n-1);

    return 0;
}
