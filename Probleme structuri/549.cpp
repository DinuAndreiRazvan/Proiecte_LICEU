/*
7
1 2 3
1 2 2
7 8 9
4 4 4
6 8 10
3 4 5
5 5 7
*/


#include<iostream>

using namespace std;

struct triunghi
{
    int a,b,c;
};

int main()
{
    int n,i,j=0;
    triunghi x,v[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x.a>>x.b>>x.c;
        if(x.a<x.b+x.c && x.b<x.a+x.c && x.c<x.a+x.b)
        {
            v[j].a=x.a;
            v[j].b=x.b;
            v[j].c=x.c;
            j++;
        }
    }
    n=j;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"("<<v[i].a<<","<<v[i].b<<","<<v[i].c<<")";
    }
    cout<<endl;

    int dr=0,o=0,is=0,e=0,w,y,z;

    for(i=0;i<n;i++)
    {
        w=v[i].a;
        y=v[i].b;
        z=v[i].c;
        if(w==y && y==z )
        {
            e++;
        }
        else
        {
            if (w==z || w==y || z==y)
            {
                is++;
            }
            else
            {
                if(w*w==y*y+z*z || z*z==y*y+w*w || y*y==w*w+z*z)
                {
                    dr++;
                }
                else
                {
                    o++;
                }
            }
        }
    }
    cout<<"Oarecare "<<o<<endl;
    cout<<"Isoscel "<<is<<endl;
    cout<<"Echilateral "<<e<<endl;
    cout<<"Dreptunghic "<<dr<<endl;



return 0;
}
