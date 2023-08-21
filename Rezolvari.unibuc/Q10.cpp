///Raspuns: 4

#include<iostream>

using namespace std;

int main()
{
    long long int x,y,z;
    int k=0;
    x=1;y=1;z=2;
    while(z<=9876543210)
    {
        if(z>=1234567890)
        {
            k++;
        }
        x=y;
        y=z;
        z=x+y;
    }
    cout<<k;

    return 0;
}
