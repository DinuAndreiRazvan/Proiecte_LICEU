#include<iostream>

using namespace std;

int a[100][100],v[100],n;

void f(int x,int &noduri, int initial)
{
    v[x]=1;
    noduri=noduri*10+x;

    if(a[x][initial]==1 && noduri<1000 && noduri>99)
    {
        cout<<noduri/100<<" "<<noduri/10%10<<" "<<noduri%10<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        if(v[i]==0 && a[x][i]==1)
        {
            f(i,noduri,initial);
        }
    }
    noduri=noduri/10;
    v[x]=0;
}

int main()
{
    int m,c=0,d,i,j,x,y;

    cin>>n>>m;
    i=0;
    while(i<m)
    {
        cin>>x>>y;
        a[x][y]=1;

        i++;
    }

    for(i=1;i<=n;i++)
    {
        c=0;
        f(i,c,i);

        for(j=1;j<=n;j++)
        {
            v[j]=0;
        }

    }

    return 0;
}

