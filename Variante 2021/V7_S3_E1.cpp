#include<iostream>

using namespace std;

void afisare(int x,int y,int k)
{
    int i,c=0;
    for(i=x;i<=y;i++)
    {
        cout<<i<<" ";
        c++;
        if(c==k)
        {
            cout<<"*"<<" ";
            c=0;
        }
    }
    if(c!=0)
    {
        cout<<"*";
    }

}

int main()
{

    int x,y,k;
    cin>>x>>y>>k;
    afisare(x,y,k);

}
