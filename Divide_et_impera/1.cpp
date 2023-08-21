/*Se citesc n elemente ale unui vector. Sa se verifice cate elemente impare se gasesc in vector*/
#include<iostream>

using namespace std;

int f(int a[],int st,int dr)
{
    if(st==dr)
    {
        if(a[dr]%2==1)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        int mj;
        mj=(st+dr)/2;
        int k1=f(a,st,mj);
        int k2=f(a,mj+1,dr);

        return k1+k2;
    }

}

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<f(a,0,n-1);

    return 0;
}
