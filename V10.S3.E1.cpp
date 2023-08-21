#include<iostream>

using namespace std;
void produs(int n,int &p)
{
    int v[10],i;
    for(i=0;i<10;i++)
    {
        v[i]=0;
    }
    while(n!=0)
    {
        if(n%10%2==0)
        {
            v[n%10]++;
        }
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(v[i]!=0)
        {
            p=p*i;
        }
    }

}

int main()
{
    int n,p=1;
    cin>>n;
    produs(n,p);
    cout<<p;

    return 0;
}
