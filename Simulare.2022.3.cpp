#include<iostream>
#include<fstream>

using namespace std;
ofstream fout("bac.txt");

int main()
{
    int n,a=0,b=0,i,x;

    cin>>n;

    for(i=1;i<n;i++)
    {
        x=i;
        while(x%3==0)
        {
            x=x/3;
            a++;
        }
        while(x%5==0)
        {
            x=x/5;
            b++;
        }
    }
    a=a/2;
    if(a<b)
    {
        fout<<a;
    }
    else
    {
        fout<<b;
    }


    return 0;
}
