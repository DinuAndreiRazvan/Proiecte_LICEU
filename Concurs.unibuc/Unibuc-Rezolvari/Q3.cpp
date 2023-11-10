///Raspuns: 9

#include<iostream>

using namespace std;

void f(int x,int &s)
{
    int c=1,i;
    if(x!=0)
    {
        for(i=1;i<=x;i++)
        {
            c=(c*(x%10))%10;
        }
        s=(s+c)%10;
        f(x-1,s);
    }

}

int main()
{
    int s=0;

    f(2022,s);

    cout<<s;

    return 0;
}
