#include<iostream>

using namespace std;

int main()
{
    long long int K=0,h;
    int d;

    for(h=2;h<14052022;h++)
    {
        d=1;
        while(d<=h/2)
        {
            if(h%d==0)
            {
                K++;
            }
            d++;
        }
        cout<<h<<endl;
    }

    cout<<endl<<endl<<K;

    return 0;
}
