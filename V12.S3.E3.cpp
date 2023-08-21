#include<iostream>
#include<fstream>

using namespace std;
ofstream fout("V12.S3.E3.out");

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        fout<<n<<" ";
        if(n>10 && n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=n-1;
        }
    }

    return 0;

}
