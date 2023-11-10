///Raspuns:

/*
&& (c==4123 || c==361 || c==53411 || c==434241 || c==101693)
*/

#include<iostream>

using namespace std;

const int klim=1000000;

void fun(int a,int b,int c)
{
    if(a>klim || b>klim || c>klim)
    {
        return;
    }
    if(a!=c && b!=c)
    {
        cout<<c<<endl;
    }
    fun(a+1,b,c+b);
    fun(a,b+1,c+a);
}

int main()
{
    fun(0,0,0);

    return 0;
}
