/*Se dă un şir cu n elemente, numere naturale. Folosind metoda Divide et Impera să se verifice dacă în şir există elemente prime.*/
#include<iostream>

using namespace std;

int f(int a[],int st,int dr)
{

    if(st==dr)
    {
        int d=2;
        while(d<=a[st]/2)
        {
            if(a[st]%d==0)
                return 0;
            d++;
        }
        return 1;
    }
    else
    {
        int mij=(st+dr)/2;
        int x=f(a,st,mij);
        int y=f(a,mij+1,dr);

        if(x==0 && y==0)
            return 0;
        else
            return 1;
    }

}

int main()
{
    int a[100],n,i,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    k=f(a,1,n);
    if(k==0)
        cout<<"NU";
    else
        cout<<"DA";

    return 0;
}
