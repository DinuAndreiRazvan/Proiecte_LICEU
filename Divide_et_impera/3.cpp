//Se citesc n elemente ale unui vector. Sa se verifice dacă în vector exista măcar un element prim și sa se afișeze un mesaj corespunzător
#include<iostream>

using namespace std;

f(int a[],int st, int dr)
{
    if(st==dr)
    {
        int d=2;
        if(a[st]==1)
        {
            return 0;
        }
        while(d<= a[st]/2)
        {
            if(a[st]%d==0)
            {
                return 0;
            }
            d++;
        }
        return 1;
    }
    else
    {
        int mij=(st+dr)/2;
        int x=f(a,st,mij);
        int y=f(a,mij+1,dr);
        if(x==1 || y==1)
        {
            return 1;
        }
        return 0;
        //sau return (x||y)
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
