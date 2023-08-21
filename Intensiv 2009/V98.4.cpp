#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V98.in");

int main()
{
    int n,m,a,b,i=0,j=0;
    fin>>n>>m;
    int v[3000],u[3000];
    while(n!=0)
    {
        fin>>a;
        if(a%2==0)
        {
            v[i]=a;
            i++;
        }
        n--;
    }
    n=i;
    while(m!=0)
    {
        fin>>a;
        if(a%2==0)
        {
            u[j]=a;
            j++;
        }
        m--;
    }
    m=j;
    i=0;
    j--;
    while(i<n || j>=0)
    {
        if(v[i]<u[j])
        {
            if(i<n)
            {
                cout<<v[i]<<" ";
                i++;
            }
            else
            {
                cout<<u[j]<<" ";
                j--;
            }
        }
        else
        {
            if(j>=0)
            {
                cout<<u[j]<<" ";
                j--;
            }
            else
            {
                cout<<v[i]<<" ";
                i++;
            }
        }
    }

}
