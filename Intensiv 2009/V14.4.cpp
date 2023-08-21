#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V14.in");
int sub(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    if(s%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a,b,k=0,c=0;
    fin>>a;
    while(fin>>b)
    {
        if(k<5)
        {
            cout<<a<<" ";
            k++;
        }
        else
        {
            cout<<"\n";
            cout<<a<<" ";
            k=1;
        }
        if(sub(a)==1)
        {
          c++;
        }
        a=b;
    }
    if(sub(a)==1)
        {
          c++;
        }
    if(k==5)
    {
        cout<<"\n";
    }
    cout<<a;
    cout<<"\n"<<c;


}
