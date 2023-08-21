//Se dă un vector cu n elemente numere naturale. Folosind metoda Divide et Impera să se verifice dacă are elementele ordonate crescător.
#include<iostream>

using namespace std;

f(int a[],int st, int dr)
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

        if(x<y && (x!=-1))
        {
            return y;
        }
        else
        {
            return -1;
        }
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
    if(f(a,0,n-1)!=-1)
    {
        cout<<"Da";
    }
    else
    {
        cout<<"Nu";
    }

    return 0;
}
