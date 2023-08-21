#include<iostream>

using namespace std;

void nrfp(int n,int&m)
{
    int d=2,cnt=0,cntmax=0,i,j;
    for(i=2;i<=n;i++)
    {
        cnt=0;
        d=2;
        j=i;
        while(d<=j)
        {
            if(j%d==0)
            {
                cnt++;
                while(j%d==0)
                {
                    j=j/d;
                }
            }
            d++;
        }
        if(cntmax<=cnt)
        {
            cntmax=cnt;
            m=i;
        }
    }

}

int main()
{
    int n,m=0;
    cin>>n;
    nrfp(n,m);
    cout<<m;
}
