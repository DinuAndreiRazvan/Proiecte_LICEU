#include<iostream>

using namespace std;
void perechi(int n)
{
    int a=1,b;
    while(a<=n)
    {
        if(n%a==0)
        {
            b=n/a;
            if(a%2!=b%2 && a<b)
            {
                cout<<"["<<a<<" "<<b<<"]"<<" ";
            }
        }
        a++;
    }
}

int main()
{
    int n;
    cin>>n;
    perechi(n);
    return 0;
}
