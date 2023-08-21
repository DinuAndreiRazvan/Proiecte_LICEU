#include<iostream>
#include<fstream>

using namespace std;
ifstream fin1("V4_1.in");
ifstream fin2("V4_2.in");
int v[100000];

int main()
{
    int n,m,x,y,aux,bux;
    fin1>>n>>x;
    fin2>>m>>y;
    aux=m+n;

    while(aux!=0)
    {
       if(y<x)
       {
           if(y%5==0)
           {
               cout<<y<<" ";
           }
           fin2>>y;
       }
       else
       {
            if(x%5==0 && x!=y)
            {

                cout<<x<<" ";
            }
            else
            {
                    if(x==y)
                {
                    fin1>>x;
                    fin2>>y;
                }
                else
                {
                    fin1>>x;
                }
            }
       }
       aux--;
    }
    if(y%5==0)
        {
            cout<<y<<"";
        }
        if(x%5==0)
        {
            cout<<x<<" ";
        }

}

