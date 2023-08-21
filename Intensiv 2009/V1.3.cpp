#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V1.3.in");

int main()
{
    int n,a,ok=0;
    cin>>n;
    while(fin>>a)
    {
        if(a%n==0)
        {
            cout<<a<<" ";
            ok=1;
        }
    }
    if(ok==0)
    {
        cout<<"NU EXISTA";
    }
    return 0;

}
