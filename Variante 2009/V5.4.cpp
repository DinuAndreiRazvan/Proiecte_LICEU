#include <iostream>

using namespace std;
int f(int a)
{
    int d=2;
    while(d<=a)
    {
        if(a%d==0)
        {
            return d;
        }
        d++;
    }
}

int main()
{
    int n,nr,ok=0;
    cin>>n;
    while(n!=0)
    {
        cin>>nr;
        if(f(nr)==nr)
        {
            cout<<nr<<" ";
            ok=1;
        }

        n--;
    }
    if(ok==0)
    {
        cout<<"NU EXISTA";
    }
}
