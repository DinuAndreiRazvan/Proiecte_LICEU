#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("Simulare2022.in");

int main()
{
    int v[100],i=0,n,m,a;
    fin>>n;
    while(n)
    {
        fin>>a;
        if(a%3==0)
        {
            v[i]=a;
            i++;
        }
        n--;
    }
    n=i;
    i=0;
    fin>>m;
    while(m && i<n)
    {
        fin>>a;
        if(a%3==0 && v[i]>a)
        {
            cout<<a<<" ";
        }
        else
        {
            if(a==v[i])
            {
                cout<<a<<" ";
                i++;
            }
            else
            {
                if(a>v[i])
                {
                    while(v[i]<a && i<n)
                    {
                        cout<<v[i]<<" ";
                        i++;
                    }
                }
            }
        }
        m--;
    }
    if(n<i)
    {
        while(fin>>a)
        {
            if(a%3==0)
            {
                cout<<a<<" ";
            }
        }
    }
    else
    {
        if(m==0 && i<n)
        {
            while(n>i)
            {
                cout<<v[i]<<" ";
                i++;
            }
        }
    }

    return 0;
}
