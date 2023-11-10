///Raspuns: 23

#include<iostream>

using namespace std;

int h(int a,int b,int k)
{
    if(a<=0)
    {
        if(k==1)
        {
            return a+b;
        }
        else
        {
            return b;
        }
    }
    else
    {
        return h(a-b,b,k+1);
    }
}

int main()
{
    cout<<h(14052022,23,0);//da eroare

    return 0;
}
