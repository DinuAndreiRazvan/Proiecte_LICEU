#include<iostream>
#include<fstream>

using namespace std;
ifstream fin1("V20.1.in");
ifstream fin2("V20.2.in");


int main()
{
    int n,m,a,b;
    fin1>>n>>a;
    fin2>>m>>b;
    m--;
    n--;
    while(n!=0 || m!=0)
    {
        if(a==b)
        {
            cout<<a<<" ";
            if(n!=0)
            {
                fin1>>a;
                n--;
            }
            if(m!=0)
            {
                fin2>>b;
                m--;
            }
        }
        else
        {
            if(a<b && n!=0)
            {
                fin1>>a;
                n--;
            }
            else
            {
                fin2>>b;
                m--;
            }
        }
    }

}
