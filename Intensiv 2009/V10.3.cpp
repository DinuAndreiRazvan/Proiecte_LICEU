#include<iostream>

using namespace std;
void sub(int n,int&a,int&b)
{
    int d=2,c,k,aux,cnt=0;
    c=n;
    while (cnt != 2)
    {
        k=0;
        d=2;
       while(d<=c/2)
       {
           if(c%d==0)
           {
               k=1;
               d=c+1;
           }
           d++;
       }
       if(k==0)
       {
           a=b;
           b=c;
           cnt++;
       }
       c--;
    }
    cout<<a<<" "<<b;

}

int main()
{
    int n,a,b;
    cin>>n;
    sub(n,a,b);
    return 0;

}
