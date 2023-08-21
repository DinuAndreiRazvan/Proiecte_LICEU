/*
5
0 0 2
3 0 1
0 0 4
8 0 3
9 9 1
*/
#include<iostream>
#include<math.h>

using namespace std;

int distanta_centre(int a,int b,int c, int d)
{
   int m,k,h;
   k=(a-c)*(a-c);
   h=(b-d)*(b-d);
   m=k + h;
   return m;
}

struct cerc
{
    int x,y;
    int r;
};

int main()
{
    int n,i,j=0;
    cin>>n;
    int m,k,h;
    cerc a[100];
    for(i=0;i<n;i++)
    {
        cin>>a[j].x>>a[j].y>>a[j].r;
        j++;
    }
    n=j;
    cout<<endl;
    cout<<"Perechiile de cercuri tangente exterior sunt: ";
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            m=distanta_centre(a[j].x,a[j].y,a[i].x,a[i].y);
            if(m == (a[i].r+a[j].r)*(a[i].r+a[j].r))
            {
                cout<<"[";
                cout<<"("<<a[i].x<<","<<a[i].y<<","<<a[i].r<<")";
                cout<<"("<<a[j].x<<","<<a[j].y<<","<<a[j].r<<")";
                cout<<"] ";
            }
        }
    }

    cout<<endl<<"Perechiile de cercuri interioare sunt: ";

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            m=distanta_centre(a[j].x,a[j].y,a[i].x,a[i].y);
            if(m < (a[i].r+a[j].r)*(a[i].r+a[j].r))
            {
                cout<<"[";
                cout<<"("<<a[i].x<<","<<a[i].y<<","<<a[i].r<<")";
                cout<<"("<<a[j].x<<","<<a[j].y<<","<<a[j].r<<")";
                cout<<"] ";
            }
        }
    }

    cout<<endl<<"Perechiile de cercuri cu centrul pe una din axe sunt: ";

    for(i=0;i<n;i++)
    {
        if(a[i].x==0 || a[i].y==0)
        {
            cout<<"("<<a[i].x<<","<<a[i].y<<","<<a[i].r<<") ";
        }
    }

    cout<<endl;

    return 0;
}
