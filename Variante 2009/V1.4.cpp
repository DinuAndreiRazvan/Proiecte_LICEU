#include <iostream>

using namespace std;
int sub(int v[100],int n,int a)
{
    int i,cnt=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]==a)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n,v[100],i,ok=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        if(sub(v,n,v[i])!=1)
        {
            ok=1;
        }
    }
    if(ok==1)cout<<"NU";
        else cout<<"DA";

}
