#include<iostream>
#include<math.h>

using namespace std;

struct coordonate
{
    int x,y;
};

struct segment
{
    int a,b;
    float d;

}s[5000];

int main()
{
    int n,i,j,k=0,aux;
    float p;
    coordonate v[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i].x>>v[i].y;
    }
    for(i=0;i<n;i++)
    {
        if(v[i].y==0)
        {
            cout<<"("<<v[i].x<<","<<v[i].y<<")"<<endl;
        }
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( v[j].x-v[i].x==0 )
            {
                cout<<"["<<i<<";"<<j<<"]"<<endl;
            }
            s[k].a=i;
            s[k].b=j;
            s[k].d=sqrt( pow(v[j].x-v[i].x,2) + pow(v[j].y-v[i].y,2) );
            k++;
        }
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(s[i].d > s[j].d)
            {
                p=s[i].d;
                s[i].d=s[j].d;
                s[j].d=p;

                aux=s[i].a;
                s[i].a=s[j].a;
                s[j].a=aux;

                aux=s[i].b;
                s[i].b=s[j].b;
                s[j].b=aux;
            }
        }
    }
    int g=0;
    cout<<"M"<<g<<"=";

     for(i=0;i<k-1;i++)
    {
        if(s[i].d==s[i+1].d)
        {
            cout<<" "<<"[("<<v[s[i].a].x<<","<<v[s[i].a].y<<");("<<v[s[i].b].x<<","<<v[s[i].b].y<<")]"<<" ";
        }
        else
        {
            g++;
            cout<<" "<<"[("<<v[s[i].a].x<<","<<v[s[i].a].y<<");("<<v[s[i].b].x<<","<<v[s[i].b].y<<")]"<<" ";
            cout<<endl;
            cout<<"M"<<g<<"=";
        }
    }
    cout<<" "<<"[("<<v[s[k-1].a].x<<","<<v[s[k-1].a].y<<");("<<v[s[k-1].b].x<<","<<v[s[k-1].b].y<<")]"<<" ";


    return 0;
}

