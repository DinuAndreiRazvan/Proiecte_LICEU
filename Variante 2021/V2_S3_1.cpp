#include<iostream>

using namespace std;

int factori(int n,int m)
{
    int d=2,cnt=0,p1,p2;
    while(d<=n && d<=m)
    {
        if(n%d==0 || m%d==0)
        {
            p1=0;
            p2=0;
            while(n%d==0)
            {
                n=n/d;
                p1++;
            }
            while(m%d==0)
            {
                m=m/d;
                p2++;
            }
            if(p1==p2)
            {
                cnt++;
            }
        }
        d++;
    }
    return cnt;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<factori(n,m);
}
