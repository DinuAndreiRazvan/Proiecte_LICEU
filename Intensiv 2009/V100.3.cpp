#include <iostream>

using namespace std;

int divizori(int a,int b,int c)
{
    int d=1,k=0;
    while(d<=a || d<=b || d<=c)
    {
        if(a%d==0 && b%d==0 && c%d==0)
        {
            k++;
        }
        d++;
    }
    return k;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<divizori(a,b,c);
}
