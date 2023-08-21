#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V11.S3.E3.in");

int main()
{
    int a,b,k=1;
    fin>>a;
    while(fin>>b)
    {
        if(a==b)
        {
            k++;
        }
        else
        {
            cout<<a<<" "<<k<<" ";
            k=1;
        }
        a=b;
    }
    cout<<a<<" "<<k<<" ";

    return 0;

}
