/*
4
2 3
6 8
4 3
2 2
*/
#include<iostream>

using namespace std;

struct dreptunghi
{
    float L,l;
};

int main()
{
    int n,i,j=0,maxi=0;
    cin>>n;
    float x,y,z;
    dreptunghi a[100],aux,maxa;
    maxa.L=0;
    maxa.l=0;
    for(i=0;i<n;i++)
    {
        cin>>a[j].L>>a[j].l;
        y=a[j].l*a[j].l+a[j].L*a[j].L;
        z=maxa.l*maxa.l+maxa.L*maxa.L;
        if(z<y)
        {
            maxa.l=a[i].l;
            maxa.L=a[i].L;
            maxi=i;
        }

        j++;
    }
    n=j;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            x=a[i].l*a[i].l+a[i].L*a[i].L;
            y=a[j].l*a[j].l+a[j].L*a[j].L;
            if(x<y)
            {
                aux.l=a[i].l;
                a[i].l=a[j].l;
                a[j].l=aux.l;
                aux.L=a[i].L;
                a[i].L=a[j].L;
                a[j].L=aux.L;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"("<<a[i].L<<","<<a[i].l<<") ";
    }
    cout<<endl<<maxi;

    return 0;
}
