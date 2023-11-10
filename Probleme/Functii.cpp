#include<iostream>
#include<math.h>

using namespace std;

int f25(int x[100],int n)
{
    int i,a,b,cnt=0;
    for(i=0;i<n;i++)
    {
        a=x[i];
        b=x[i+1];
        while(a!=b)
        {
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        if(a==1)
            cnt++;
    }
    return cnt;
}

int f26(int x[100],int n)
{
    int i,a=0,cnt=0,b;
    for(i=0;i<n;i++)
    {
        a=a+x[i];
    }
    for(i=0;i<n;i++)
    {
        b=(a-x[i])/(n-1);
        if(x[i]>b)cnt++;
    }
    return cnt;
}

int f27(int x[100],int n)
{
    int i,a,ogl,cnt=0;
    for(i=0;i<n;i++)
    {
        ogl=0;
        a=x[i];
        while(a)
        {
            ogl=ogl*10+a%10;
            a=a/10;
        }
        if(ogl==x[i])cnt++;
    }
    return cnt;
}

int main()
{
    int n=4,x[100],i;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<f25(x,n)<<endl;
    cout<<f26(x,n)<<endl;
    cout<<f27(x,n)<<endl;
    return 0;

}
