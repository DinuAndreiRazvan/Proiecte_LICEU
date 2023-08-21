#include<iostream>
#include<fstream>

using namespace std;
ifstream fin1("V19.1.in");
ifstream fin2("V19.2.in");

int main()
{
    int n,m,a,b;
    fin1>>n>>a;
    fin2>>m>>b;
    n--;
    m--;
    while(m!=0 || n!=0)
    {
        if(a<b && n!=0)
        {
            cout<<a<<" ";
            fin1>>a;
            n--;
        }
        else
        {
            if(b<a && m!=0)
            {
               cout<<b<<" ";
               fin2>>b;
               m--;
            }
            else
            {
                fin1>>a;
                n--;
            }
        }
    }
    if(a>b)
    {
        cout<<b<<" "<<a;
    }
    else
    {
        cout<<a<<" "<<b;
    }


}
