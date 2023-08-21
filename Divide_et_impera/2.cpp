/*Fie un vector V cu n elemente naturale nenule, indexate de la 1 la n. Să se determine cel mai mare divizor comun al lor.*/
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
        int b=f(a,mij+1,dr);

        while(x!=b)
        {
            if(x>b)
            {
                x=x-b;
            }
            else
            {
                b=b-x;
            }
        }
        return x;
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
