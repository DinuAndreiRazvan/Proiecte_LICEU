#include<iostream>

using namespace std;
int cif(int a , int b)
{
    int k=0;
    while(a!=0)
    {
        if(b==a%10)
        {
            k++;
        }
        a=a/10;
    }
    return k;

}

int main()
{
    int a,i=9,x=0,p;
    cin>>a;
    while(i>=1)
    {
        p=cif(a,i);
        while(p!=0)
        {
            x=x*10+i;
            p--;
        }
        i=i-2;
    }
    cout<<x;

}
