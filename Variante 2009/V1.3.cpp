#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V1.3.in");

int main()
{
    int  n,a,k=0;
    cin>>n;
    while(fin>>a)
    {
        if(a%n==0)
        {
            cout<<a<<" ";
            k++;
        }
    }
    if(k==0)
    {
        cout<<"NU EXISTA";
    }

    return 0;

}
