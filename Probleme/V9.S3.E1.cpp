#include<iostream>

using namespace std;
void suma(int n,int &s)
{
    int v[10],i;
    for(i=0;i<10;i++)
    {
        v[i]=0;
    }
    while(n!=0)
    {
        if(n%10%2!=0)
        {
            v[n%10]++;
        }
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(v[i]!=0)
        {
            s=s+i;
        }
    }

}

int main()
{
    int n,s=0;
    cin>>n;
    suma(n,s);
    cout<<s;

    return 0;
}
