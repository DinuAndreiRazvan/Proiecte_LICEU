#include<iostream>

using namespace std;
int f(int a)
{
    int d=2,k,s=0;
    while(d<=a)
    {
        if(a%d==0)
        {
            k=0;
            while(a%d==0)
            {
                a=a/d;
                k++;
            }
            s=s+k;
        }
        d++;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    if(n<10)
    {
        if(f(n)==1)
            cout<<"DA";
        else
            cout<<"NU";
    }
    else;
    {
        if(n<100)
        {
            if(f(n)==1 && f(n%10*10+n/10)==1)
                cout<<"DA";
            else
                cout<<"NU";
        }
        else
        {
            if(f(n)==1 && f(n%100*10+n/100)==1 && f(n%10*100+n/10)==1)
                cout<<"DA";
            else
                cout<<"NU";
        }
    }

    return 0;

}
